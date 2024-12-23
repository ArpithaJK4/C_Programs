// Online C compiler to run C program online
#include <stdio.h>

int main() {

int a[]={10,20,30,40,50};

int n=sizeof(a)/sizeof(a[0]);
int temp,i;
for( int i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
}
    printf("Array after reverse\n");
    for(i=0;i<n;i++){
        printf("%5d",a[i]);
    }

    return 0;
}
