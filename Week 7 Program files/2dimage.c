#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>

void main(){
	unsigned char *Image;
	unsigned int width, height,red,green,blue,alpha;
	int i,j;
	unsigned int error;
	error=lodepng_decode32_file(&Image,&width,&height,"test1.png");
	if(error){
		printf("Error opening a file %d :%s",error,lodepng_error_text(error));
	}
	printf("Width:%d height:%d\n",width,height);
	for(i=0;i<height;i++){
		for(j=0;j<width;j++){
			red=Image[4*width*i+4*j+0];
			green=Image[4*width*i+4*j+1];
			blue=Image[4*width*i+4*j+2];
			alpha=Image[4*width*i+4*j+3];
			printf("[%d %d %d %d]",red,green,blue,alpha);
		}
		printf("\n");
	}
	free(Image);
}
