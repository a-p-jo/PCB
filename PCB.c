#include <limits.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MULTIPLIER 10000000

unsigned long long bench(double);

int main(int frequency, char * arguments[])
{
    if(frequency >= 3)
    {
        double load = strtod(arguments[1],NULL);
        double time_taken;
        int iterations = strtol(arguments[2],NULL,10);
        clock_t total = 0;
        long long count;
        
        load *= MULTIPLIER;
        printf("(...Running...)\n");

        for (int z = 1; z <= iterations; z++) {
            clock_t t;
            t = clock();
            count = bench(load);
            t = clock() - t;
            total += t;
            time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds
        }
        time_taken = ((double)total) / CLOCKS_PER_SEC; // in seconds
        printf("%lld Primes, %d Iterations.\nIteration Time  = %.4f s, Total Time  %.4f s\n",count, iterations, time_taken / iterations, time_taken);
    }
    else
    {
        printf("Insufficient Arguments.\n");
    }
    
    return 0;
}
unsigned long long bench(double load)
{
    if (load < 0 || load >= ULLONG_MAX)
    {
        printf("Failed : Invalid benchmark range.\n");
        return 0;
    }

    register unsigned long long n = ( unsigned long )load;
    register long long count = 0;

    if (n >= 2)
    {
        count++;
    }

    for (register unsigned long long p = 3; p <= n; p += 2)
    {
        count++;
        for (register unsigned long long i = 3; i * i <= p; i += 2)
        {
            if (p % i == 0)
            {
                count--;
                break;
            }
        }
    }
    return count;
}
