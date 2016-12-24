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
    printf("after realloc get %dth element value: %d\n",lenArray -1, digitArray[lenArray-1]);
    if(digitArray == NULL){
      printf("not enought memory function abort\n");
      return 0;
    }
  } while(1);

  for(int i = 0; i < lenArray; i++) printf("%d\n", digitArray[i]);
  digitArray = insertionSort(digitArray, lenArray);
  for(int i = 0; i < lenArray; i++) printf("%d\n", digitArray[i]);
}
