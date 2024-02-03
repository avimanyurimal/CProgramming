#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>

void main(){
	unsigned char *Image;
	unsigned int width, height;
	int i;
	lodepng_decode32_file(&Image,&width,&height,"fourbyfour.png");
	printf("Width:%d height:%d\n",width,height);
	for(i=0;i<width*height*4;i=i+4){
		printf("[Red:%d] [Green:%d] [Blue:%d] [Alpa:%d]\n",Image[i],Image[i+1],Image[i+2],Image[i+3]);
	}
	free(Image);
}
