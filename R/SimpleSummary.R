z<- function(){

readline(prompt="path: \n")

}

xi <- z()

infile <- read.table(xi, header=TRUE, sep=",", na.strings="NA", dec=".", strip.white=TRUE)

 

print('vpisite funkcijo: povzetek(), plotfun(infile),')

 

n<- function(){

  readline(prompt="enter x value to plot: ")

}

m<- function(){

  readline(prompt="enter y value to plot: ")

}

 

plotfun <- function(dat) {

  colx <- n()

  coly <- m()

  plot(dat[,colx], dat[,coly], main="Scatterplot", pch=20,xlab=[,colx] )      

}

 

povzetek<-function(){

cat("ZACETEK ANALIZE /n")

print(summary(infile))

library(Hmisc)

print(describe(infile)) }