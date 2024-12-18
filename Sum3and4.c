#include <stdio.h>


int main() {
   int n=0;
   scanf("%d",&n);
   
   int count=0;
   while(n!=0){
       int rem=n%10;
       count=(count*10)+rem;
       n=n/10;
   }
   
   
   n=count;
   int result=(n/100)%10+(n/1000)%10;
   printf("%d\n",result);

    return 0;
}
