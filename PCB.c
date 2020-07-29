#include <limits.h>
#include <stdio.h>
#include <time.h>
unsigned long long bench(double);
int main() {
        double x, time_taken;
        int y;
        clock_t total = 0;
        long long count;
        char loop;
    printf("\nPCB v0.1\nSingle-Threaded Open-source Tool for Benchmarking System Speed.\n\nRecommended Load Value 1 - 3\n");
    while(1) {       
        printf("\nEnter Load Value: ");
        if (scanf("%lf", &x) != 1)
            return 1;
        printf("\nEnter Repeat Count: ");
        if (scanf("%d", &y) != 1)
            return 1;
        x = x * 10000000;
        printf("\nPress Enter to Run ");
        getchar();
        getchar();
        printf("\n(...Running...)\n");

        for (int z = 1; z <= y; z++) {
            clock_t t;
            t = clock();
            count = bench(x);
            t = clock() - t;
            total += t;
            time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds
        }
        time_taken = ((double)total) / CLOCKS_PER_SEC; // in seconds
        printf("\n%lld Primes Processed.\n\nAverage time taken  = %.4f seconds\n",count, time_taken / y);
        printf("\nRe-Run ? (Y/N) : ");
        scanf("%c", &loop);
        if(loop == 'n' || loop == 'N'){
            printf("\nPress Enter to Exit");
            getchar();
            getchar();
            break;
        }
    }
    return 0;
}
unsigned long long bench(double x) {
    if (x < 0 || x >= ULLONG_MAX) {
        printf("invalid benchmark range\n");
        return 0;
    }
    register unsigned long long n = ( unsigned long )x;
    register long long count = 0;
    if (n >= 2)
        count++;
    for (register unsigned long long p = 3; p <= n; p += 2) {
        count++;
        for (register unsigned long long i = 3; i * i <= p; i += 2) {
            if (p % i == 0) {
                count--;
                break;
            }
        }
    }
    return count;
}