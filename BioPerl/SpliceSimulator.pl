#!/usr/bin/perl

#Program simulates splicing process..Very primitively..
use warnings;
use v5.10;
use List::Util 'pairvalues';
use List::Util 'pairmap';



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

$lenrna = length($rna);

say $lenrna."  Is total length!";


@alles = ();
my $char =  "GU";
my $char1 = "AG";
my $offset = 0;

my $result = index($rna, $char, $offset);
my $result1 = index($rna, $char1, $offset);
while ($result != -1) {

 print "Found $char at $result\n";

 $offset = $result + 1;
 $result = index($rna, $char, $offset);
 push(@alles, $result);
}
while ($result1 != -1) {

 print "Found $char1 at $result1\n";

 $offset = $result1 + 1;
 $result1 = index($rna, $char1, $offset);
 push(@alles, $result1);
}
pop(@alles);

my @s = sort {$a <=> $b} @alles;

shift(@s);

print join(",", @s);
say "\n\nAre theoretical spliceosome positions\n";


my @secnds = pairvalues @s;

print @secnds;

my @diffs = pairmap {$b-$a} @secnds;

my $size = @diffs;

my @rnaa = split ("", $rna);

my $i = 0;
while ($i <= $size){
splice @rnaa,$secnds[0],$diffs[0];
print "......splicing...........";
say @rnaa;
print "........................";
$i++;
}

unshift(@rnaa, "MMPPP");
push (@rnaa,"AUAAA");

$fi = int(rand(200));

push @rnaa, "A" for 0.. $fi;

print "\n\n  FINAL PRODUCT:\n\n";
say @rnaa;

print "\n\nBY Blaz Skrlj"