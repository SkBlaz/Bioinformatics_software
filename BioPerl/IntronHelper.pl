#!/usr/bin/perl

#This program helps  find common intron motifs
use warnings;


use Bio::SeqIO;
use Bio::Seq;
 
print "please enter the sequence you want to examine:\n";

my $inpt1 = <STDIN>;
chomp $inpt1;


$seqio_obj = Bio::SeqIO->new(-file => $inpt1, -format => "fasta", alphabet => 'rna' );
 
$seq_obj = $seqio_obj->next_seq;
 
$seq = $seq_obj->seq;

print "Initiating translation of the sequence...";
(my $rna = $seq) =~ s/T/U/g;
print "\n".$rna."\n";



@al = ();

sub tlt{
@gu = ();
my($char) = @_;
my $offset = 0;

my $result = index($rna, $char, $offset);

while ($result != -1) {

 print "Found $char at $result\n";

 $offset = $result + 1;
 $result = index($rna, $char, $offset);
 push(@gu, $result.",");
 push(@al, $result);
}
 
print "\n locations:\n";
pop(@gu);
pop(@gu);
pop(@gu);
print @gu;
}
tlt("GU");
tlt("AG");
tlt($ui);


my $size = @al;

print "\n"."Number of locations:  ".$size."\n";