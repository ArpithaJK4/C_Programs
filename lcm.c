// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a,b;
int lcm=0;
scanf("%d%d",&a,&b);
if(a>b){
    lcm=a;
}else{
    lcm=b;
}

while(lcm%a!=0||lcm%b!=0){
    lcm++;
}
printf("lcm of the number is  %d",lcm);
    return 0;
}
