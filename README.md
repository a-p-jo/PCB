# PCB
Prime C Benchmark || Python v C Benchmark || Processor Computation Benchmark

3 Long Forms, One Acronym

PCB is a small project by a hobbyist dev.

PCB takes a 'Load Value'(L.V.) and a 'Repeat Count' as input.
PCB processes all natural numbers from 2 to (L.V. * 10^7) , measures how 
long it takes, and repeats this for the number of times specified in
'Repeat Count'.
The number of primes found and the avergae time taken over the runs is
then outputted. 

PCB does not purport to be an accurate benchmark for purpose of 
comparing performance across systems/processors.It tests only for
integer division , supplies only CPU time, and compiler/OS 
optimizations may vary.

PCB is intended towards the following (under identical conditions) :

1) Measuring runtime performance changes across languages
2) Measuring of gains through overclocking/boosting CPU
3) Specifically measuring integer division capcity of CPU

At the moment, PCB is has been rewritten in Python (Originally written in C)
to measure differences in performance between the languages, the results of
which are attached in the 'PerCompare.png' image. 

And other uses as and when they arise.

Any contribution/critique is welcome.
