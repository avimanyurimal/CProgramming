#include <stdio.h>

int main(){
    int i,c;
    int start=1,finish=500;
    for(i=start;i<=finish;i++){
        for(c=2;c<=i-1;c++){
            if(i%c==0){
                break;
            }
            }
            if(c==i){
                printf("Prime number:%d\n",i);
            }
    }
    return 0;
}

