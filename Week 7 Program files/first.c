#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>
void main(){
	unsigned char *Image;
	unsigned int width, height;
	lodepng_decode32_file(&Image,&width,&height,"test1.png");
	printf("Width:%d Height:%d",width,height);
	free(Image);
}
