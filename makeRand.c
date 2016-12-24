#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv){
  char* usage = "makerad [arraylen]";
  srand(time(NULL));
  int* randArray;
  int lenArray;
  switch (argc){
    case 1:
      lenArray = 1000;
      break;
    case 2:
      lenArray = atoi(argv[1]);
      break;
    default:
      printf("%s",usage);
      return 1;
  } //end of switch
  randArray = malloc(sizeof(int)*lenArray);
  for(int i = 0; i < lenArray; i++){
    randArray[i] = rand();
    printf("%d\n", randArray[i]);
  }
}
