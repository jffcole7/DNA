from __future__ import division
from sys import argv

script, filename = argv
#with open(filename.txt 'r') as input:
a= open(filename)
a1 = a.read()
b = len(a1) 
print b 
c = a1.count("C") + a1.count("G")
print c
d = c/b  
print d
print d*100
#print  " %d percent" % (d*100)