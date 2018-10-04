#include <stdlib.h>
#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#include "imageUtils.h"

Pixel **loadImage(const char *filePath, int *height, int *width) {
  int x,y,n;
  unsigned char *data = stbi_load(filePath, &x, &y, &n, 4); //4 = force RGBA channels
  *height = y;
  *width = x;

  //contiguous allocation:
  Pixel **image = (Pixel **)malloc(sizeof(Pixel *) * y);
  
  image[0] = (Pixel *)malloc(sizeof(Pixel) * (y * x));
  int i;
  for(i = 1; i < y; i++) {
    image[i] = (*image + (x * i));
  }

  int rowIndex = 0;
  int colIndex = 0;
  
  for(i = 0; i < (x * y * 4); i += 4) { //for each row
      image[rowIndex][colIndex].red   = data[i + 0];
      image[rowIndex][colIndex].green = data[i + 1];
      image[rowIndex][colIndex].blue  = data[i + 2];
      colIndex++;
      if(colIndex == x) {
        //go to next row, reset column
        rowIndex++;
        colIndex=0;
      }
  }
  stbi_image_free(data);
  return image;
}

void saveImage(const char *fileName, Pixel **image, int height, int width) {

  // Convert height x width Pixel array to single array with
  // 3 (RGB) channels, ignoring the alpha channel and assume 100% opaque
  unsigned char *data = (unsigned char *) malloc(height * width * 3);
  int x = 0;
  int i;
  for(i = 0; i < height; i++) {
    for(int j = 0; j < width; j++) {
      data[x + 0] = image[i][j].red;
      data[x + 1] = image[i][j].green;
      data[x + 2] = image[i][j].blue;
      x += 3;
    }
  }
  //write
  stbi_write_jpg(fileName, width, height, 3, data, 100);
  free(data);
  return;
}

Pixel ** copyImage(Pixel **image, int height, int width) {
  //TODO: implement
  
}

void flipHorizontal(Pixel **image, int height, int width) {
	//TODO: implement
	int w, h, i;
	Pixel a;
	for(h = 0; h < height; h++){
		i = 0;
		for(w = width - 1; w > width / 2; w--){
			a = image[h][i];
			image[h][i] = image[h][w];
			image[h][w] = a;
			i++;
		}
	}
	
	return;
}

void flipVertical(Pixel **image, int height, int width) {
  //TODO: implement
  int h, w, i;
  Pixel b;
	for(w = 0; w < width; w++){
		i = 0;
		for(h = height - 1; h >= height / 2; h--){
			b = image[i][w];
			image[i][w] = image[h][w];
			image[h][w] = b;
			i++;
		}
	}
  return;
}

Pixel ** rotateClockwise(Pixel **image, int height, int width) {
  //TODO: implement
	//Pixel **newImage[width][height]; //create new 2D array
	
	int i;
	Pixel **newImage = (Pixel **)malloc(sizeof(Pixel *) * width);
	newImage[0] = (Pixel *)malloc(sizeof(Pixel) * (width * height));
	for(i = 1; i < width; i++) {
		newImage[i] = (*newImage + (height * i));
	}

	
	
	int h, w;
	for(w = 0; w < width; w++){
		i = 0;
		for(h = height - 1; h >= 0; h--){
			newImage[w][h] = image[i][w];
			i++;
		}
	}
	
	return newImage;
}
