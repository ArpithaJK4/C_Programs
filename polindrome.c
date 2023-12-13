#include <stdio.h>

int main() {
  int no=1001;
  int copy=no;
  int rev=0;
  while(no!=0){
  int rem=no%10;
  rev=(rev*10)+rem;
  no=no/10;
  
  
  
  }
  if(copy==rev){
  printf("palindrome");
  }else{
  printf("not a palindrome");
  }
  return 0;
}