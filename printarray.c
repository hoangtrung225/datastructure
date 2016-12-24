#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  int lenArray;
  switch (argc) {
    case 1:
      lenArray = 100;
      break;
    case 2:
      lenArray = atoi(argv[1]);
      break;
    default:
      printf("usage: makelist [length]");
      return 1;
  }

  int* intArray = malloc(sizeof(int)*lenArray);
  for(int i = 0; i < lenArray; i++) intArray[i] = i;
  int tmp;
  for(int i = 0; i < 100; i++){
    int firstPtr = rand()%lenArray;
    int secondPtr = rand()%lenArray;
    tmp = intArray[firstPtr];
    intArray[firstPtr] = intArray[secondPtr];
    intArray[secondPtr] = tmp;
  }
  for(int i = 0; i < lenArray; i++) printf("%d\n",intArray[i]);
}
