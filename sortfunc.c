#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* insertionSort(int* arrayPtr, int len){
int tempPtr;

  for(int pointer = 0; pointer < len; pointer++){
    tempPtr = 0;
    while(arrayPtr[pointer] > arrayPtr[tempPtr] && tempPtr < pointer) tempPtr++;
    int val = arrayPtr[pointer];
    for(int i = pointer; i > tempPtr; i--) arrayPtr[i] = arrayPtr[i-1];
    arrayPtr[tempPtr] = val;
  }
  return arrayPtr;
}

int* mergeSort(int* arrayHead, int len){
  if(len < 2){
    return arrayHead;
  }
  if(arrayHead == NULL){
    printf("get NULL input as array have no ideal what hapeening");
    return NULL;
  }
  printf("sort LEFT\n");
  mergeSort(arrayHead, len/2);
  printf("sort RIGHT\n");
  mergeSort(arrayHead + (len/2), len - len/2);

  int* bufferLeftArray = malloc(len/2);
  if(bufferLeftArray == NULL) {
    printf("system fail to allocate more memory");
    return NULL;
  }
  memcpy(bufferLeftArray, arrayHead, len/2 * sizeof(int));

  int* bufferRightArray = malloc(len - len/2);
  if(bufferRightArray == NULL) {
    printf("system fail to allocate more memory");
    return NULL;
  }
  memcpy(bufferRightArray, arrayHead+len/2, (len-len/2)*sizeof(int));

  //commencing the merging process
  int* leftPtr = bufferLeftArray;
  int* rightPtr = bufferRightArray;
  for(int i = 0; i < len; i++){
    if((*leftPtr) < (*rightPtr)){
      arrayHead[i] = *leftPtr;
      leftPtr++;
    }
    else{
      arrayHead[i] = *rightPtr;
      rightPtr++;
    }
  }
  free(bufferLeftArray);
  free(bufferRightArray);
  return arrayHead;
}
