#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int cont=0, num, random;
  
  srand(time(NULL));
  random = rand()%21;
  
  while(cont<5){
  printf("Chute um numero: ");
  scanf("%d", &num);

  if(num==random){
    printf("Voce acertou! \n");
    }
    
  else if(num<random){
    printf("O numero eh maior! \n");
    }

  else if(num>random){
    printf("O numero eh menor! \n");
    cont++;
    }
  }
}