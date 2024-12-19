// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a,b;
int max=0;

scanf("%d%d",&a,&b);
int result=a;

for(int i=a;i<=b;i++){
    int temp=i;
    int count =0;
    while(temp%2==0){
        temp/=2;
        count++;
       
    }
    if(count>max){
        max=count;
        result=i;
    }
  }
  printf("%d",result);
  return 0;
}
