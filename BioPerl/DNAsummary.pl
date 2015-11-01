#!/bin/perl -w

use Bio::SeqIO;

use Bio::Seq;

use Statistics::Basic qw(:all);

#counting nucleotides and doing statistics.

$seqio_obj = Bio::SeqIO->new(-file => "ecoli.fasta", -format => "fasta", alphabet => 'dna' );

$seq_obj = $seqio_obj->next_seq;

sub nucleo{

                my $DNA = $seq_obj->seq;

                my $a = ($DNA=~tr/A//);

                my $b = ($DNA=~tr/T//);

                my $c = ($DNA=~tr/G//);

                my $d = ($DNA=~tr/C//);

                $total = $a + $b + $c +$d;

                print " total number of nucleotides $total\n";

                print "\n              THE STATISTICS \n";

                my $stddev1 = stddev($a, $b, $c, $d);

                chomp($stddev1);

                print "\nstandard deviation of numbers of bases is:  ", $stddev1;

                                                               if ($a + $b == $c + $d){

                                                                              print "\nsomething is not right with the sequence, the number of AT and GC is the same. \n";

                                                               } else{

                                               print "\nthe ratios in the sequence seem to be OK\n";

                               }

                my @nucleos = split(//,$DNA);

                my  $mode = mode($a, $b, $c, $d);

                

                print "\n             THE REPETITIONS \n","\n A           T          G          C    \n$mode\n\n";

                if ($a*3>$b*$c*$d ){

                print "\n the A is the most common \n"}

                if($b*3>$a*$c*$d ){

                print "\n the T is the most common \n"}

                if($c*3>$a*$b*$d ){

                print  "\n the G is the most common \n"}

                else {

                print "\nthe C is the most common\n"}

}

nucleo();

EXAMPLE OUTPUT

 total number of nucleotides 942902

              THE STATISTICS

standard deviation of numbers of bases is:  8,385.8
the ratios in the sequence seem to be OK

             THE REPETITIONS

 A           T          G          C
[229,154, 230,401, 233,337, 250,010]


the C is the most common