#!/bin/perl -w
#Char by char comparison and computation of summary
use Bio::SeqIO;
use Bio::Seq;

use Array::Utils qw(:all);
use bignum (p => -3);
 
my ($inpt1, $inpt2) = @ARGV;

$seqio_obj = Bio::SeqIO->new(-file => $inpt1, -format => "fasta", alphabet => 'dna' );
 
$seq_obj = $seqio_obj->next_seq;

$seqio_obj1 = Bio::SeqIO->new(-file => $inpt2, -format => "fasta", alphabet => 'dna' );
 
$seq_obj1 = $seqio_obj1->next_seq;

my $seq1 = $seq_obj1->seq;

my $seq = $seq_obj->seq;

print $seq."\nis the input sequence 1 !\n\n";

print $seq1."\nis the input sequence 2 !\n\n";
 
my @b = split("", $seq);

my @a = split("", $seq1); 

my $sum = 0;
my $arrsize = @a;

my $i = 0;
while($i<$arrsize)
{
if ($a[$i] eq $b[$i]){
$sum++;
print "Hit!\nCurrent matches: $sum \n";
$i++;
}
else{
print "Pass\n";
$i++;
}
}

my $fullsum = $sum;
my $ratio = $fullsum/$arrsize;
print "\nMatching ratio: $ratio\n";

if ($ratio > 0.9){
print "A very good match!";
}
else{
print "it could be better.\n\n";
}