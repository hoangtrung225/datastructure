#include <stdio.h>
#include <stdlib.h>
#include "sortfunc.h"

int main(int argc,char** argv){
  int lenArray = 0;
  int* digitArray = malloc(sizeof(int));
  do {
    if(scanf("%d\n",&digitArray[lenArray]) == EOF) break;
    lenArray++;
    digitArray = realloc(digitArray, (lenArray+1)*sizeof(int));
    if(digitArray == NULL){
      printf("not enought memory function abort\n");
      return 0;
    }
  } while(1);
  printf("before sorting\n");
  for(int i = 0; i < lenArray; i++) printf("%d\n", digitArray[i]);
  digitArray = mergeSort(digitArray, lenArray);
  printf("after sorting\n");
  for(int i = 0; i < lenArray; i++) printf("%d\n", digitArray[i]);
}
