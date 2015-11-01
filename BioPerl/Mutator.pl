#!/usr/bin/perl

use warnings;
use Bio::SeqIO;
use Bio::Seq;
use bignum (p => -3);
 
#this program mutates given sequence and outputs results

 
print "please enter the sequence you want to examine:\n";

my $inpt1 = <STDIN>;
chomp $inpt1;


$seqio_obj = Bio::SeqIO->new(-file => $inpt1, -format => "fasta", alphabet => 'dna' );
 
$seq_obj = $seqio_obj->next_seq;
 
$seq = $seq_obj->seq;

 sub match(){
 	print "\nComputing..:\n";
 
my $s1 = "TAG";
my $s2 = "TGA";
my $s3 = "TAA";
my @c = $seq =~ /$s1/g;
my @c1 = $seq =~ /$s2/g;
my @c2 = $seq =~ /$s3/g;
my $count = @c+@c1+@c2;
print"\n $count"."  Are all occurencies of stop codons in the sequence.\n";
}


print "\nif you want to see number of stop codons(1).\n
Try mutation?(2)\n";
$inpt2 = <STDIN>;

if ($inpt2 == 1 ){
match();
}elsif ($inpt2 == 2){
my @a = split("", $seq);
my $arrsize = @a;
my @letters = ('A','T','G','C','N');
my $inta = int(rand($arrsize));
print $inta." Will there be mutations!\n";
my $i = 0;
while ($i < $inta){
print "\nmutating...\n";
my $rl = $letters[int rand @letters];
my $intb = int(rand($arrsize));
$a[$intb] = $rl;
print "\n@a\n";
my $seqm = join('',@a);
print "\n\n$seqm is the new mutated sequence!\n\n";
$i++;
}
my $seqm = @a;
print $seqm;
}