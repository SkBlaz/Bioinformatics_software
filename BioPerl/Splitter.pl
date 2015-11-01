#!/bin/perl 
#split according to stop codons
use Bio::SeqIO;

use Bio::Seq;

$seqio_obj = Bio::SeqIO->new(-file => "ecoli.fasta", -format => "fasta", alphabet => 'dna' );

while (my $seq = $seqio_obj->next_seq){

                my $string = $seq->seq;

                @aray = $string;

                for(@aray){s/T/U/g};

                $gio = join('', @aray);

                @spli1 = split(/UGA/, $gio);

                @spli2 = split(/UAA/, $gio);

                @spli3 = split(/AUG/, $gio);

                               $as = scalar(grep {defined $_} @spli1);

                               $bs = scalar(grep {defined $_} @spli2);

                               $cs = scalar(grep {defined $_} @spli3);

                               $sum = $as + $bs + $cs;

                print "if splited by AUG UGA UAA codons,\nthere is a sum of $sum  fractals.\n\n";

                print 'split according to AUG, UGA, UAA(type 1,2 or 3) ?:   ';

                               my $pip = <stdin>;

                               if ($pip == 1)

                               {

                               print "which number of split: ";

                               my $is1 = <stdin>;

                               print @spli3[$is1];

                               print "      BY BLAZ SKRLJ";

                               }elsif($pip == 2)

                               {

                               print "which number of split: ";

                               my $is1 = <stdin>;

                               print @spli1[$is1];

                               print "      BY BLAZ SKRLJ";

                               }elsif($pip == 3)

                               {

                               print "which number of split: ";

                               my $is1 = <stdin>;

                               print @spli2[$is1];

                               print "      BY BLAZ SKRLJ";

                               }else{

                               print "no go";

                               }

}
