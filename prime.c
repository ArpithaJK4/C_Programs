


#include<stdio.h>



int main(){



 int no;
 int flag=1;
 printf("enter the no to be check:");
 scanf("%d\n",&no);

   for(int i=2;i<=no;i++){
    if(no%i==0){

    flag=0;
    }

   }
   if(flag==1){
   printf(" no is prime");
   }else{

   printf("no is not prime");
   }
   return 0;
}
