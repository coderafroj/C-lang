#include <stdio.h>
int main(){
  int x;
  printf("Enter your Age:-");
  scanf("%d",&x);
  if(x>=18){
    if(x>90){
      printf("Your are aged");
    }
    else{
    printf(" eligible for vote");
    }
    
  }
  else{
    printf("you are baby");
  }
}