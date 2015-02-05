import random
from sys import argv
script, filename = argv
target = open(filename, 'w')
target.truncate()
target.write(''.join(random.choice('ATCG') for _ in range(random.randint(500,10000))))
#a =''.join(random.choice('ATCG') for _ in range(random.randint(500,10000)))
#print a
#print len(a)
target.close()