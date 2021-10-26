# Producer-Consumer
Submission of Producer/Consumer program for Joshua Sakal

To compile and run these programs, use:
g++ producer.cpp -pthread -lrt -o producer
g++ consumer.cpp -pthread -lrt -o consumer
./producer & ./consumer &

Code uploaded in the form of 'producer.cpp' for producer
and 'consumer.cpp' for consumer.

Written in the terminal of Linux Ubuntu 20.04.3 & GNOME Version 3.36.8

Code most likely doesn't work, as I got confused on 
shared memory and semaphores. I do not know enough 
about them and looking them up confused me. The attached 
files were the best I could do.

What I believe it is supposed to do is that the semaphore allows
producer to run, which accesses a shared memory location, scales
it to 2 (due to only producing 2 products at a time), then 
increments the pointer to the shared memory to simulate the
production of products, deaccesses the shared memory, then
tells the semaphore to allow consumer to run, which does the same 
thing producer does, except decrementing the pointer and then telling
the semaphore to let producer run, then the cycle continues.
