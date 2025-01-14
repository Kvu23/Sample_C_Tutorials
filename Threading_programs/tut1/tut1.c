#include <pthread.h>
#include <stdio.h>

void *Thread1(void *arg)
{
    printf("Hello from thread 1\n\n");
    pthread_exit(NULL);
}

void *Thread2(void *arg)
{
    printf("Hello from thread 2\n\n");
    pthread_exit(NULL);
}

int main(int argc, char const *argv[])
{
    /* code */
    pthread_t tid1, tid2;

    /*create threads*/
    pthread_create(&tid1, NULL, Thread1, NULL);
    pthread_create(&tid2, NULL, Thread2, NULL);

    /*Join the threads firsts*/
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    printf("Hello from main thread\n");

    printf("Both threads are terminated \n\n");

    return 0;
}
