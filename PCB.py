import time
import sys
MULTIPLIER = 10000000

def bench(load):
    load = int(load)
    count = 0
    if(load >= 2):
        count+=1
    for i in range(3,load+1,2):
        count+=1
        q = 3
        while q * q <= i:
            if i % q == 0:
                count -= 1
                break
            q += 2
    return count

if len(sys.argv) >= 3:
    load = float(sys.argv[1])
    load *= MULTIPLIER
    iterations = int(sys.argv[2])

    print("(...Running...)")
    total = 0

    for z in range(0,iterations):
        start = time.process_time()
        count = bench(load)
        t = time.process_time() - start
        total += t       

    print(count,"Primes", iterations, "Iterations\nIteration Time =","{:.4f}s,".format(total/iterations),"Total Time =","{:.4f}s".format(total))
else :
    print("Too Few Arguments.")
