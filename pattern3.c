// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         printf("%c\t",j+64);
         
     }
     printf("\n");
 }
    return 0;
}
