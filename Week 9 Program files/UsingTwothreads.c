#include <stdio.h>
#include <pthread.h>

void *first(void *p){//prints from 1 to 100
	int i;
	int start=1,finish=100;
	for(i=start;i<=finish;i++){
		printf("ThreadOne:%d\n",i);
	}
}
void *second(void *pin){//prints from 101 to 200
	int i;
	int start=101,finish=200;
	for(i=start;i<=finish;i++){
		printf("ThreadTwo:%d\n",i);
	}
}

int main(){
	pthread_t thread1, thread2;
	pthread_create(&thread1,NULL,first,NULL);
	pthread_create(&thread2,NULL,second,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	return 0;
}
