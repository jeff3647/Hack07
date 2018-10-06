#include<stdlib.h>
#include<stdio.h>
#include"array_utils.h"


int contains(const int *arr, int size, int x){
   int k,j;
   for(k=0;k<=size;k++){
      if(x==arr[k]){
        printf("The x is in this array\n");
        return 0;
      }
   }
   printf("x is not in this array\n" );
   return 0;
 }
 
 
 int containsWithin(const int *arr, int size, int x, int i, int j){
	int k;
	for(k = i; k <= j; k++){
		if(x == arr[k]){
			printf("%d is within the indices (%d, %d).\n", x, i, j);
			return 0;
		}
	}
	printf("%d is not within the indices (%d, %d).\n", x, i, j);
	return 0;
 }


int * paddedCopy(const int *arr, int oldSize, int newSize){
	int * deepCopy = (int *) malloc(sizeof(int) * newSize);
	int i = 0, n, k;
	if(newSize <= oldSize){
		for(i = 0; i < newSize; i++){
			deepCopy[i] = arr[i];
		}
	}
if(newSize > oldSize){
    //int * deepCopy = (int *) malloc(sizeof(int) * newSize);
    for(i = 0; i <= oldSize; i++){
      deepCopy[i] = arr[i];
    }
    for(k = oldSize; k <= newSize; k++){
      deepCopy[k] = 0;
    //  printf("%d, %d",k,deepCopy[k] );
    }
}
for(i = 0; i < newSize; i++){
  printf("arr[i] = %d\n", deepCopy[i]);
}
	return 0;
}


void reverse(int *arr, int size){
int i,temp1,temp2;
for(i=0;i<=size/2;i++){
temp2=arr[i];
temp1=arr[size-1-i];

  arr[i]=temp1;
  //printf("%d\n",arr[i] );
  arr[size-i-1]=temp2;

}
for(i=0;i<size;i++){
  printf("arr[%d]=%d\n",i, arr[i]);
}
}

int * reverseCopy(const int *arr, int size){
  int i,temp1,temp2;
  int*reCopy=(int*)malloc(sizeof(int)*size);
  for(i=0;i<size; i++){
    reCopy[i]=arr[i];
  }
  for(i=0;i<=size/2;i++){
    temp2=reCopy[i];
    temp1=reCopy[size-1-i];

    reCopy[i]=temp1;
    reCopy[size-i-1]=temp2;

  }
for(i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,reCopy[i]);
  }
  return reCopy;
}
