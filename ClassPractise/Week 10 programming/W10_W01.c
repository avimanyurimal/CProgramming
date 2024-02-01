//Race Condition
//congurent executions
// #include <stdio.h>
// #include <unistd.h>
// #include <pthread.h>

// int shared = 10;
// void * first (void *p){
//     int x = shared;
//     x=x+1;
//     sleep(1);
//     shared=x;
// }
// void *second(void *p){
//     int y = shared;
//     y=y-1;
//     sleep(1);
//     shared=y;
// }
// void main(){
//     pthread_t thread1, thread2;
//     pthread_create(&thread1,NULL,first,NULL);
//     pthread_create(&thread2,NULL,first,NULL);
//     pthread_join(thread1, NULL);
//     pthread_join(thread2,NULL);
//     printf("The final vlaue of shared:%d", shared);
// }

//serial execution 
// #include <stdio.h>
// #include <unistd.h>
// #include <pthread.h>

// int shared = 10;
// void * first (void *p){
//     int x = shared;
//     x=x+1;
//     sleep(1);
//     shared=x;
// }
// void *second(void *p){
//     int y = shared;
//     y=y-1;
//     sleep(1);
//     shared=y;
// }
// void main(){
//     pthread_t thread1, thread2;
//     pthread_create(&thread1,NULL,first,NULL);
//     pthread_join(thread1, NULL);
//     pthread_create(&thread2,NULL,first,NULL);
//     pthread_join(thread2,NULL);
//     printf("The final vlaue of shared:%d", shared);
// }

//critical section cs
// there  are critical section and non critical section in every code
//it is the stction of program where the global variables get changed manipulated


//mutual exclusion (mutex) 
//concurrent excetuion program prevents race condition.
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int shared = 10;
pthread_mutex_t mutex; // declaring  mutex variable
void * first (void *p){
    pthread_mutex_lock(&mutex); //locking the resources so that thread 1 can only use it
    int x = shared;
    x=x+1;
    sleep(1);
    shared=x;
    pthread_mutex_unlock(&mutex); //unlocking the resoiurces so that the thread 2 can access 
}
void *second(void *p){
    pthread_mutex_t mutex; // declaring  mutex variable
    int y = shared;
    y=y-1;
    sleep(1);
    shared=y;
    pthread_mutex_unlock(&mutex); //unlocking the resources so that the other thread  can access
}
void main(){
    pthread_t thread1, thread2;
    pthread_mutex_init(&mutex,NULL); // initilizing mutex
    pthread_create(&thread1,NULL,first,NULL);
    pthread_join(thread1,NULL);
    pthread_create(&thread2,NULL,first,NULL);
    pthread_join(thread2,NULL);
    printf("The final vlaue of shared:%d",shared);
    pthread_mutex_destroy(&mutex); //destroying the mutex to avoid the future consequences .i.e deadlock, resources leakages
}