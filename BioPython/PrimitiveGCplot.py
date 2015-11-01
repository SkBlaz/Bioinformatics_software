First split the fasta record on smaller bits: (script found on wiki)
IF RECORDS ARE IN ONE FILE
def batch_iterator(iterator, batch_size) :
    """Returns lists of length batch_size.

    This can be used on any iterator, for example to batch up
    SeqRecord objects from Bio.SeqIO.parse(...), or to batch
    Alignment objects from Bio.AlignIO.parse(...), or simply
    lines from a file handle.

    This is a generator function, and it returns lists of the
    entries from the supplied iterator.  Each list will have
    batch_size entries, although the final list may be shorter.
    """
    entry = True #Make sure we loop once
    while entry :
        batch = []
        while len(batch) < batch_size :
            try :
                entry = iterator.next()
            except StopIteration :
                entry = None
            if entry is None :
                #End of file
                break
            batch.append(entry)
        if batch :
            yield batch
from Bio import SeqIO
record_iter = SeqIO.parse(open("fastek.fasta"),"fasta")
for i, batch in enumerate(batch_iterator(record_iter, 10000)) :
    filename = "group_%i.fasta" % (i+1)
    handle = open(filename, "w")
    count = SeqIO.write(batch, handle, "fasta")
    handle.close()
    print "Wrote %i records to %s" % (count, filename)


OTHERWISE USE THIS SNIPPET(manually set the size of chunks)
from Bio.Alphabet import IUPAC
from Bio import SeqIO
from Bio.Seq import Seq
from Bio.SeqRecord import SeqRecord


def chunks(l, n):
    """Yield successive n-sized chunks from l."""
    for i in xrange(0, len(l), n):
        yield l[i:i+n]

if __name__ == '__main__':
    handle = open('ecoli.fasta', 'r')
    records = list(SeqIO.parse(handle, "fasta"))
    record = records[0]

    for pos, chunk in enumerate(chunks(record.seq.tostring(), 10000)):
        chunk_record = SeqRecord(Seq(
            chunk, record.seq.alphabet),
            id=record.id, name=record.name,
            description=record.description)
        outfile = "group_%d.fasta" % pos
        SeqIO.write(chunk_record, open(outfile, 'w'), "fasta")






Then iterate over bits and draw a graph.


from Bio.SeqUtils import GC
from Bio import SeqIO
i=1
gus = []
record = SeqIO.read(open("group_%d.fasta" % i), "fasta")
for num in record:
    if i < 95:
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