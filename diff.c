// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int num,diff;
   int count=0;
   scanf("%d%d",&num,&diff);
   int arr[]={12,3,14,56,77,13};
  for(int i=0;i<=sizeof(arr) / sizeof(arr[0]);i++){
     if(arr[i]-num<=diff&&arr[i] - num >= -diff){
         count++;
     }
          
      }
  printf("%d",count);
    return 0;
}
