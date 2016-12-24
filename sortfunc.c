#include <stdio.h>

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
