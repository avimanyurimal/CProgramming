#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>
void main(){
	unsigned char *Image;
	unsigned int width, height;
	lodepng_decode32_file(&Image,&width,&height,"test1.png");
	printf("Width:%d Height:%d\n",width,height);
	int i;
	for(i=0;i<width*height*4;i=i+4){
		printf("[%d %d %d %d]\n",Image[i+0],Image[i+1],Image[i+2],Image[i+3]);
	}
	free(Image);
}
