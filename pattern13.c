// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
   
    scanf("%d", &n); 




    for (int i = 1; i<=n; i++) {
     for(int j=1;j<=i;j++){
         printf("*\t");
     }
     for(int k=1;k<=(2*(n-i));k++){
         printf("\t");
     }
      for(int m=1;m<=i;m++){
         printf("*\t");
     }
printf("\n");
}
    for (int i = n-1; i >=1; i--) {
     for(int j=1;j<=i;j++){
         printf("*\t");
     }
     for(int k=1;k<=(2*(n-i));k++){
         printf("\t");
     }
      for(int m=1;m<=i;m++){
         printf("*\t");
     }
printf("\n");
}

    return 0;
}
