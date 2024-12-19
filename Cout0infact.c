// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int count=0;
for(int i=5;i<=n;i=i+5){
    int temp=i;
    while(temp%5==0){
temp=temp/5;
    count++;
}
}
printf("%d",count);
    return 0;
}
