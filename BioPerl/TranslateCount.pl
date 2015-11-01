#!/bin/perl -w
 
use Bio::SeqIO;
use Bio::Seq;
use Bio::Tools::Run::StandAloneBlast;
 
$seqio_obj = Bio::SeqIO->new(-file => "ecoli.fasta", -format => "fasta", alphabet => 'dna' );
 
$seq_obj = $seqio_obj->next_seq;

print "the length of the DNA is: ", $seq_obj->length, " bp";

$prot = $seq_obj->translate;
print "  proteinska sekvenca je:", $prot->seq, "\n";

$prot_obj = $seq_obj->translate(-frame => 1);
print "dolzina proteinske sekvence je:  ", $prot_obj->length;
print "\n", "the length of the DNA is: ", $seq_obj->length, " bp";



$blast_obj = Bio::Tools::Run::StandAloneBlast->new(-program => 'blastn', -database => 'db.fa');
$report_obj = $blast_obj->blastall($seq_obj);
$result_obj = $report_obj->next_result;
print $result_obj->num_hits;