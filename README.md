# PCB
Small Python v C Benchmark

PCB takes a 'Load Value'(L.V.) and a 'Repeat Count' as input.
PCB processes all natural numbers from 2 to (L.V. * 10^7) , measures how 
long it takes, and repeats this for the number of times specified in
'Repeat Count'.

The number of primes found and the average time taken over the runs is
then outputted. 

PCB does not purport to be an accurate benchmark for purpose of 
comparing performance across systems/processors.It tests only for
integer division , supplies only CPU time, and compiler/OS 
optimizations may vary.
