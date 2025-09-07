# <div align="center" >Loops questions in C language </div>
1. Wap a program to check prime or not. 
```
#include <stdio.h>
int main(){
  int n;
  int isprime=1;
  printf("Enter number check prime or not");
  scanf("%d",&n);
  for(int i=2;i<n;i++){
    if(n%i==0){
      isprime=0;
      break;
    }
  }
  if(isprime){
    printf("number is prime");
  }
  else{
    printf("not prime");
  }
  
}
```
2. Wap  to print all prime numbers between 1 and 100. 
```
#include <stdio.h>
int main(){
  int n;
  printf("Enter number to print prime number:-");
  scanf("%d",&n);
  for(int i=2;i<n;i++){
    int isprime=1;
    for(int j=2;j<i;j++){
      if(i%j==0){
        isprime=0;
        break;
      }
    }
    if(isprime){
      printf("%d\n",i);
    }
  }
}
```
3. Wap count the number of digits in a number. 
```
#include <stdio.h>
int main(){
    int n;
    int c=0;
    printf("Enter number to countt number");
    scanf("%d",&n);
    if(n==0){
       c=0;
    }
    while(n!=0){
        n=n/10;
        c++;
    }
    printf("%d",c);
}
        
```
4. Wap to reverse number.
```
#include <stdio.h>
int main(){
    int n,reverse=0,remainder;
    printf("Enter number to reverse number");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    printf("%d",reverse);
}
```