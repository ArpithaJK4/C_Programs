// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n-i;j++)
     printf("\t");
     for(int k=1;k<=i;k++)
     printf("*\t");
      
     printf("\n");

    
 }
    return 0;
}

