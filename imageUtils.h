/*
Title: Hack07
Group: Jeffrey Park(hpark), XinYi Zhu, Alex Anson
Date: 10/05/18

Description: Function prototypes are stored in imageUtils.h
*/


/**
 * A structure that represents a single pixel value using
 * the RGB (red-blue-green) color model.  Each integer
 * value is in the range [0, 255].
 */
typedef struct {
  int red;
  int green;
  int blue;
} Pixel;

/**
 * Loads an image file specified by the given file path/name.
 * The height and width are indicated in the two pass-by-reference variables.
 * The image is returned as a two-dimensional array of Pixel values
 * of dimension (height x width) where the pixel at [0][0] corresponds to
 * the top-left most pixel value.
 */
Pixel **loadImage(const char *filePath, int *height, int *width);

/**
 * Saves the given image (which is assumed to have the same format as in
 * loadImage() and is of the given height x width) to the file specified
 * by the given path/name.
 */
void saveImage(const char *filePath, Pixel **image, int height, int width);

/**
 *copyImage*
 *parametres: filePath, height, width
 *The function will return copyImage(copy of loaded image)
 */
Pixel ** copyImage(Pixel **image, int height, int width);

/**
 *flipHorizontal*
 *parametres: image, height, width
 *The function will flip image horizontally
 *Return type: void
 */
void flipHorizontal(Pixel **image, int height, int width);

/**
 *flipVertical*
 *parametres: image, height, width
 *The function will flip image vertically
 *Return type: void
 */
void flipVertical(Pixel **image, int height, int width);

/**
 *rotateClockwise*
 *parametres: image, height, width
 *The fucntion will rotate image clockwise -> 90 degrees rotation
 *Return type: newImage //since the width and height will also be changed accordingly
 */
Pixel ** rotateClockwise(Pixel **image, int height, int width);
