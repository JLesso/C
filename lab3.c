#include <stdio.h>
#include <stdlib.h>

int main(void){
int val;
printf("Enter Integer\n");
printf("For Number Of Iterations:");
scanf("%i", &val);
for(int i = 1; i <= val; ++i){
  if(i%2)
  {
     printf("For %i\n",i);
  }
}
int y = 1;
while(y<=val)// or can do (y<=val && y<=7)
{
  if (y>7)
  {
    break;
  }
  printf("While %i\n",y);
  ++y;
}

y = 1;

do{

printf("Do-while %i\n",y);
y++;

}while(y<=val);

return EXIT_SUCCESS;
}
