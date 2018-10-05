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


int * paddedCopy(const int *arr, int oldSize, int newSize){
if(newSize<oldSize){
  int*paddedCopy=(int*)malloc(sizeof(int)*newSize);
  return 0;//only therst
//newSize elements should be copied over.
}
int i=0,n,k;
if(newSize>oldSize){
    int*deepCopy=(int*)malloc(sizeof(int)*newSize);
    for(i=0;i<oldSize;i++){
      deepCopy[i]=arr[i];
    }
    for(k=oldSize;k<newSize;k++){
      deepCopy[k]=0;
    //  printf("%d, %d",k,deepCopy[k] );
    }
}
for(i=0;i<=newSize;i++){
  printf("arr[i]=%d\n", arr[i]);
}

}
