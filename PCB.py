def bench(x):
    x = int(x)
    count = 0
    if(x>=2):
        count+=1
    for i in range(3,x+1,2):
        count+=1
        q = 3
        while q*q <= i:
            if i%q == 0:
                count-=1
                break
            q += 2
    return count

print("PCB v0.1\nSingle-Threaded Open-source Tool for Benchmarking System Speed.\nRecommended Load Value 1 - 3")
import time
while True:
    x = float(input("Enter Load Value: "))
    x = x * 10000000
    y = int(input("Enter Repeat Count: "))
    input("Press Enter to Run")
    print("(...Running...)")
    total = 0

    for z in range(0,y):
        start = time.process_time()
        count = bench(x)
        t = time.process_time() - start
        total += t
        

    print(count," Primes processed.\n\nAverage time taken = ","{:.4f}".format(total/y))
    loop = input(" Re-Run ? (Y/N) : ")
    if loop == 'n' or loop == 'N':
        input("Press Enter to Exit")
        break


    
        
