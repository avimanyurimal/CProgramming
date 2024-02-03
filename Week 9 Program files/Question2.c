 #include <stdio.h>
 #include <pthread.h>
 #define numbers 1000
 #define noofthreads 5
 
 typedef struct{
 	int start;
 	int finish;
 	int threadid;
 }threaddata;
 
 void *printnumber(void *p){
 	threaddata *data =(threaddata*)p;
 	int i;
 	for(i=data->start;i<=data->finish;i++){
 		printf("ThreadID:%d Value:%d\n",data->threadid,i);
	 }
 }
 
 int main(){
 	pthread_t threads[noofthreads];
 	threaddata data[noofthreads];
 	int i,range=numbers/noofthreads;//range=1000/5=200;
 	for(i=0;i<noofthreads;i++){
 		data[i].start=i*range+1;
 		data[i].finish=(i+1)*range;
 		data[i].threadid=i;
 		if(pthread_create(&threads[i],NULL,printnumber,&data[i])!=0){
 			perror("Error creating threads");
		 }
	 }
	 
	for(i=0;i<noofthreads;i++){
		if(pthread_join(threads[i],NULL)!=0){
			perror("Error joining threads");
		}
	}
 }
 
