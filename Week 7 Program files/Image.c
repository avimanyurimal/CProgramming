#include <stdio.h>
#include "lodepng.h"
void main(){
	unsigned char *Image;
	unsigned int width, height;
	lodepng_decode32_file(&Image,&height,&width,"Test1.png");
	printf("Width:%d Height:%d\n",width,height);
	int i;
	for(i=0;i<width*height*4;i=i+4){
		printf("%d %d %d %d\n",Image[i],Image[i+1],Image[i+2],Image[i+3]);
	}
	free(Image);
}
