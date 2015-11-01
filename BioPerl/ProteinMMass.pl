#!/usr/bin/perl
#Basic molar mass calculator
use Bio::SeqIO;

use Bio::Seq;

print "please enter the sequence you want to examine:\n";

my $inpt1 = <STDIN>;

chomp $inpt1;

$seqio_obj = Bio::SeqIO->new(-file => $inpt1, -format => "fasta",alphabet => "protein");

$seq_obj = $seqio_obj->next_seq;

$seq = $seq_obj->seq;

sub amino{

                my $i = ($seq=~tr/I//);

                my $a = ($seq=~tr/A//);

                my $r = ($seq=~tr/R//);

                my $n = ($seq=~tr/N//);

                my $d = ($seq=~tr/D//);

                my $b = ($seq=~tr/B//);

                my $c = ($seq=~tr/C//);

                my $q = ($seq=~tr/Q//);

                my $e = ($seq=~tr/E//);

                my $z = ($seq=~tr/Z//);

                my $g = ($seq=~tr/G//);

                my $h = ($seq=~tr/H//);

                my $l = ($seq=~tr/L//);

                my $k = ($seq=~tr/K//);

                my $m = ($seq=~tr/M//);

                my $p = ($seq=~tr/P//);

                my $s = ($seq=~tr/S//);

                my $t = ($seq=~tr/T//);

                my $w = ($seq=~tr/W//);

                my $y = ($seq=~tr/Y//);

                my $v = ($seq=~tr/V//);

                my $sum = $i+$a+$r+$n+$d+$b+$c+$q+$e+$z+$g+$h+$l+$k+$m+$p+$s+$t+$w+$y+$v;

                print"\n Total amount of amino acids present: $sum \n";

                %protdata = ("I"=>131.1736,"A"=>89.0935,"R"=>174,"N"=>132,

                "D"=>133,"B"=>133,"C"=>121,"Q"=>146,"E"=>147,"Z"=>147,"G"=>75,"H"=>155,

                "L"=>131,"K"=>146,"M"=>149,"P"=>165,"S"=>105,"T"=>119,"W"=>204,"Y"=>181,"V"=>117);

                

                @masa = values %protdata;

                my $mmass = $i*$masa[0]+$a*$masa[1]+$r*$masa[2]+$n*$masa[3]+$d*$masa[4]+$b*$masa[5]+$c*$masa[6]

                +$q*$masa[7]+$e*$masa[8]+$z*$masa[9]+$g*$masa[10]+$h*$masa[11]+$l*$masa[12]+$k*$masa[13]+$m*$masa[14]

                +$p*$masa[15]+$s*$masa[16]+$t*$masa[17]+$w*$masa[18]+$y*$masa[19]+$v*$masa[20];

                

                print "\n Molar mass of the molecule is: $mmass g/mol  \n\n"

                

                }

amino();