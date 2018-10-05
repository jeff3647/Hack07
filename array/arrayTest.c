#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"array_utils.h"

int main(int argc,char** argv){
  /*int size, x;
  printf("Please input number of your array\n");
  scanf("%d",&size );
  printf("Please input your numebr you want to check\n");
  scanf("%d",&x);
  int *arr = (int*)malloc(sizeof(int)*size);
  int i;
  for (i=0; i<size;i++){
    printf("Please input your number");
    scanf("%d",&arr[i]);
  }
contains(arr, size, x);*/
int oldSize, newSize;
scanf("%d", &oldSize);
scanf("%d", &newSize);

int *arr = (int*)malloc(sizeof(int)*oldSize);
int i;
for (i=0; i<oldSize;i++){
  printf("Please input your number");
  scanf("%d",&arr[i]);
}
paddedCopy(arr,oldSize, newSize);




  return 0;
}
