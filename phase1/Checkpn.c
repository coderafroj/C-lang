#include <stdio.h>
int main(){
  int x;
  printf("Enter the number:-");
  scanf("%d",&x);
  if(x>0){
    printf("%d number is positive",x);
  }
   else if(x<0){
    printf("%d number is negative\n",x);
  }
  else{
      printf("%d number is zero",x);
    
  }

}
