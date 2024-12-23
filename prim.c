// Online C compiler to run C program online
#include <stdio.h>
int isprime(int num){
    for (int i=2;i<=num/2;i++){
        if(num%2==0){
            return 0;
        }else{
            return 1;
        }
    }
}
int main() {
int l,u,i;
printf(" enter the input range:\n");
scanf("%d%d",&l,&u);
for(i=1;i<=u;i++){
    if(isprime(i))
    printf("%d\t",i);
}
    return 0;
}
