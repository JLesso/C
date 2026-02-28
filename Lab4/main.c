#include <stdio.h>
#include <stdlib.h>
#include "funs.h"

int main(int argc, char *argv[]){
int val;
printf("Running %s with parameter %s\n", argv[0],argv[1]);
printf("Enter Integer (0=Exit):");
scanf("%i", &val);
while(val!=0){
printf("The square of %d is %d\n",val,fun1(val));
printf("The next num is %d\n",fun2(val));
printf("The half of %d is %6.2f\n",val,fun3(val));
printf("Enter Integer (0=Exit):");
scanf("%i", &val);
}
return EXIT_SUCCESS;
}
