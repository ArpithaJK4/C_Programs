#include <stdio.h>


int main() {
   int n=0;
   scanf("%d",&n);
   
 if(n%400==0 || n%4==0 && n % 100 != 0){
     printf("leap year %d",n);
 }else{
      printf("not year %d",n);
 }
    return 0;
}
