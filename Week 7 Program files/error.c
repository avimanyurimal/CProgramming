#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>

void main(){
	unsigned char *image;
	unsigned int width, height;
	unsigned int error;
	error=lodepng_decode32_file(&image,&width,&height,"fourbyfour.png");
	printf("Image avialable or not:%d:%s",error,lodepng_error_text(error));
	free(image);
}
