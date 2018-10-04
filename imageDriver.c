
#include <stdlib.h>
#include <stdio.h>

#include "imageUtils.h"

int main(int argc, char **argv) {

  int h, w;
  Pixel **image = loadImage("yourImage.jpg", &h, &w);

  //flipHorizontal(image, h, w);
  flipVertical(image, h, w);
  
  
  saveImage("copy.jpg", rotateClockwise(image, h, w), h, w);
  
  //saveImage("copy.jpg", image, h, w);

  return 0;
}
