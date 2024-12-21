// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      for(int j=1;j<=(i-1);j++){
          printf("  ");
         
      }
       printf("%d",i);
      for(int k=1;k<=((n-i)*2);k++){
          printf("  ");
      }
      if(i!=n)
          printf("%d",i);
        
      
        printf("\n");
  }
  
    for(int i=n;i>=1;i--){
      for(int j=1;j<=(i-1);j++){
          printf("  ");
        
      }
        printf("%d",i);
      for(int k=1;k<=((n-i)*2);k++){
          printf("  ");
      }
      if(i!=n)
          printf("%d",i);
        
      
        printf("\n");
  }
    return 0;
}
