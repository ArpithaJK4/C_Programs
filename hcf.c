// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a,b;

scanf("%d%d",&a,&b);
int hcf=a<b?a:b;

while(hcf>0){
    if(a%hcf==0&&b%hcf==0)
       break;
   hcf--;
}
  

printf(" %d",hcf);
    return 0;
}


