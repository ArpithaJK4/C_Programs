#include<stdio.h>

int add(int , int);
int sub(int , int);
int mul(int ,int);
int div(int , int);
void main(){

int a,b,choice;


printf("**********************Simple Calculater********************");

printf(" \n chose the type of the following operation:");

printf("\n\t1. ADD");
printf("\n\t2.SUB");
printf("\n\t3.MUL");
printf("\n\t4.DIV");
printf("\n\t5.Exit");
printf("\nEnter your choice:\n");
scanf("%d",&choice);
printf("Enter the two operands:\n");
scanf("%d%d",&a,&b);
switch(choice){
case 1:  printf("addition of %d and %d is%d:",a,b,add(a,b));
     break;

case 2: printf("substraction  of %d and %d is%d:",a,b,sub(a,b));
     break;

     case 3: printf("multiplication of of %d and %d is%d:",a,b,mul(a,b));
     break;
     case 4:  printf("division of %d and %d is%d:",a,b,div(a,b));

      break;
     default: printf("enter the valid choice");



}
return 0;
}
int add(int a, int b){

return (a+b);

}

int sub(int a, int b){

return (a-b);

}
int mul(int a, int b){

return (a*b);

}

int div(int a, int b){

return (a/b);

}
