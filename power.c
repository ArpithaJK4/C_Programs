// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int flag=1;
int sum;
for(sum=1;sum<=n;sum=sum*2){
    if(sum==n){
        flag=1;
        break;
    }
}
if(flag==1){
    printf("Yes");
}else{
    printf("No");
}
    return 0;
}
