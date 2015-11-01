import numpy
#/usr/bin/python
hist = []
class genom:
    zerolen = 0

    def __init__(self, name, length):

        self.name = name
        self.length = length
        genom.zerolen += self.length
        hist.append(length)



    def dolzina1(self):
        print "the length of %s is %d bp "% (self.name, self.length)

    def total(self):
        print "total length is %d bp "% (genom.zerolen)

    def variability(self):
        hi = []
        hi.append(genom.zerolen)
        print "variance of lengths is %d"% (numpy.mean(hi))


hgi=[]
gen1 = genom("ecoli", 67854)
gen2 = genom("bacillus", 9999)
gen3 = genom("lactobacter", 98395)
gen1.dolzina1()
gen2.dolzina1()
gen3.dolzina1()
print "vseh baznih parov je %d"% genom.zerolen
x = numpy.var(hist)
y = numpy.mean(hist)
print "variance and mean of lengths are", x, ",", y