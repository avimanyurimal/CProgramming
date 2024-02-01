// #include <stdio.h>
// #include <pthread.h>
// #include <unistd.h>

// char ch = 'A';

// void *fun(void *p) {
//     pthread_exit((void*)&ch);
// }

// int main() {
//     void *ptr;
//     pthread_t thread1;
//     pthread_create(&thread1, NULL, fun, NULL);
//     sleep(1);
//     pthread_join(thread1, &ptr);
//     printf("The value of ch: %c", *(char*)ptr);
//     return 0;
// }

//simple code for single threading

// #include <stdio.h>
// #include <pthread.h>
// #include <unistd.h>

// int sum;
// void *fun(void *p){
//     int i;
//     for(i=0;i<=1000;i++){
//         sum+=i;
//     }
//     pthread_exit((void*)&sum);
// }

// void main(){
//     void *ptr;
//     pthread_t thread1;
//     pthread_create(&thread1, NULL, fun, NULL);
//     pthread_join(thread1,&ptr);
//     printf("The sum of number form 1 to 1000 is: %d",*(int*)ptr);
// }

//multi threading 
// #include <stdio.h>
// #include <pthread.h>
// #include <unistd.h>

// int sum1, sum2;

// void *fun1(void *p) {
//     int i;
//     for (i = 1; i <= 500; i++) {
//         sum1 += i;
//     }
//     pthread_exit((void *)&sum1);
// }

// void *fun2(void *p) {
//     int i;
//     for (i = 501; i <= 1000; i++) {
//         sum2 += i;
//     }
//     pthread_exit((void *)&sum2);
// }

// int main() {
//     void *ptr1, *ptr2;
//     pthread_t thread1, thread2;
//     pthread_create(&thread1, NULL, fun1, NULL);
//     pthread_create(&thread2, NULL, fun2, NULL);
//     sleep(1);
//     pthread_join(thread1, &ptr1);
//     pthread_join(thread2, &ptr2);
//     printf("The sum of numbers from 1 to 500 is: %d\n", *(int *)ptr1);
//     printf("The sum of numbers from 501 to 1000 is: %d\n", *(int *)ptr2);
//     printf("The total sum is: %d\n", *(int *)ptr1 + *(int *)ptr2);
//     return 0;
// }

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *fun(void *p){
    int i;
    for (i=1;i<=10000000000000000;i++){
        printf("Hello from i:%d\n",i);
        pthread_testcancel();
    }
}

void main(){
    pthread_t thread1;
    pthread_create(&thread1,NULL,fun,NULL);
    sleep(1);
    pthread_cancel(thread1);
    printf("Thread Cancelled.\n");
    pthread_join(thread1,NULL);
}



void * first(void *p){
    int i;
    int start = 1, finish=500;
    for (i=start; i<=finish;i++){
        
    }
}

