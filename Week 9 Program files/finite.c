#include <stdio.h>
#include <windows.h>
#include <pthread.h>
void *first(void *p){
	int i;
	for(i=0;i<8;i++){
		sleep(1);
		printf("I am from first.\n");
	}
}
void second(){
	int i;
	for(i=0;i<3;i++){
		sleep(2);
		printf("I am from second.\n");
	}
}

int main(){
	pthread_t thread;
	pthread_create(&thread,NULL,first,NULL);
	second();
	pthread_join(thread,NULL);
	return 0;
}
