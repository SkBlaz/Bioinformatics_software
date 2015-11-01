#!/usr/bin/python

import subprocess
from Bio import SeqIO
import matplotlib
import matplotlib.pyplot as plt
import re
import easygui as eg
eg.msgbox("vstopate v program analize FASTA sekvenc")
choices = ["analiza fragmentov","analiza sekvence FASTA","exit"]
reply = eg.choicebox("kaj zelite analizitati?", choices=choices)
if reply == "analiza sekvence FASTA":
    #!/usr/local/bin/python
    #to je program, ki analizira primarne transkriptome danega FASTA genoma.
    from Bio import SeqIO
    import matplotlib
    import matplotlib.pyplot as plt
    import re



    from Bio.SeqUtils import GC
    sekv = raw_input("what to open?:   ")
    seq_record = SeqIO.read(open(str(sekv)), "fasta")
    print len(seq_record.seq)/2, "bp je dolzina celotne DNA sekvence "
    print "razmerje G/C je:", GC(seq_record.seq), "%"
    if GC(seq_record.seq) > 50:
        print "verjetno gre za eukarionta"
    else:
        print "to verjetno ni prokariont"



    mRNA = seq_record.seq.transcribe()
    print"dejanska dolzina (skupne)rna je torej:", len(mRNA)
    rez1 = mRNA.split("AUG")
    rez2 = str(rez1).split("UGA")
    rez3 = str(rez2).split("UAA")
    print "teoreticnih transkriptov je", len(rez3)
    print len(seq_record.seq)/(70*3600), "ure traja celotna transkripcija"




    def plotx():
        plt.figure(1)
        plt.subplot(2, 1, 1)
        y = (len(seq_record.seq), len(rez3))
        x = (0,len(seq_record.seq)/(70*3600))
        width = 0.5
        plt.bar(x, y, width, color="r")
        plt.ylabel( 'stevilo enot' )
        plt.xlabel("Iz baznih parov v transkripte(h)")
        plt.title("prikaz celotnega genoma v razmerju s stevilom transkriptov")
        plt.legend("enote")
        plt.subplot(2, 1, 2)
        y = (len(seq_record.seq), len(rez3))
        x = (0, 3)
        plt.xlabel("cas(h)")
        plt.ylabel("vpad stevila enot")
        plt.plot(x, y, color="g")
        plt.show()
    plotx()

    import matplotlib.pyplot as plt
    import numpy as np
    import networkx as nx
    def custom_edge_colors():
        #create an empty graph
        G = nx.Graph()



        H=nx.path_graph(len(rez3))
        G.add_nodes_from(H),



        custom_node_color={}
        custom_node_color["H"] = "g"





        nx.draw_random(G, node_color=custom_node_color.values(), with_labels=False, node_size=5)


        C = nx.Graph()
        C.add_node("genom")
        custom_node_color={}
        custom_node_color["genom"] = "g"
        nx.draw_random(C, node_color=custom_node_color.values(), with_labels=True, node_size=2500)


        plt.show()



    custom_edge_colors()
    from Bio.Seq import Seq
    my_Record = SeqIO.read(str(sekv), "fasta")
    my_seq = my_Record.seq
    translat = my_seq.transcribe()
    from Bio.Blast import NCBIWWW
    from Bio.Blast import NCBIXML
    print "blasting...."
    result_handle=NCBIWWW.qblast("blastn", "nt", str(translat))
    blast_record = NCBIXML.read(result_handle)
    E_VALUE_THRESH = 0.05

    for alignment in blast_record.alignments:
         for hsp in alignment.hsps:
             if hsp.expect < E_VALUE_THRESH:
                 print('****PORAVNAVA****')
                 print('sequence:', alignment.title)
                 print('length:', alignment.length)
                 print('e value:', hsp.expect)
                 print(hsp.query[0:75] + '...')
                 print(hsp.match[0:75] + '...')
                 print(hsp.sbjct[0:75] + '...')
if reply == ("analiza fragmentov"):

    print("razbijam fragment")
    from Bio import SeqIO
    from Bio.Seq import Seq
    from Bio.SeqRecord import SeqRecord


    chnk = raw_input("katero datoteko bi analizirali?")
    def chunks(l, n):
        for i in xrange(0, len(l), n):
            yield l[i:i+n]

    if __name__ == '__main__':
        handle = open(str(chnk), 'r')
        records = list(SeqIO.parse(handle, "fasta"))
        record = records[0]

        for pos, chunk in enumerate(chunks(record.seq.tostring(), 10000)):
            chunk_record = SeqRecord(Seq(
                chunk, record.seq.alphabet),
                id=record.id, name=record.name,
                description=record.description)
            outfile = "group_%d.fasta" % pos
            SeqIO.write(chunk_record, open(outfile, 'w'), "fasta")
    from Bio.SeqUtils import GC
    from Bio import SeqIO
    i=1
    gus = []
    record = SeqIO.read(open("group_%d.fasta" % i), "fasta")
    for num in record:
        if i < 92:
            print GC(record.seq)
            gus.append(GC(record.seq))
            print gus
            i = i + 1
            record = SeqIO.read(open("group_%d.fasta" % i), "fasta")
        else:
            pass

    import numpy as np
    import matplotlib.pyplot as plt
    def funkcija():
        plt.plot(gus)
        plt.ylabel('razmerje GC')
        plt.xlabel("10000b veliki deli od zacetka proti koncu molekule")
        plt.show()

    funkcija()
else:
    pass