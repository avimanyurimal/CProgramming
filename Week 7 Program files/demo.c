#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>
void main(){
	unsigned char *image;
	unsigned int error;
	unsigned int w,h,r,g,b,a;
	int i,j;
	error = lodepng_decode32_file(&image,&w,&h,"test1.png");
	if(error){
	printf("%d: %s",error,lodepng_error_text(error));
	}
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			r=image[4*w*i+4*j+0];
			g=image[4*w*i+4*j+1];
			b=image[4*w*i+4*j+2];
			a=image[4*w*i+4*j+3];
			b=255;
			image[4*w*i+4*j+2]=b;
			printf("[%d %d %d %d]\t",r,g,b,a);
		}
		printf("\n");
	}
	unsigned char *png;
	size_t pngsize;
	error = lodepng_encode32(&png,&pngsize,image,w,h);
	if(!error){
		lodepng_save_file(png,pngsize,"output.png");
	}
	free(image);
	free(png);
}
