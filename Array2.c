// sort an array with 0 1 and 2 without sorting algo
#include <stdio.h>

int main() {

int a[]={1,0,2,2,1,0,1};


int n=sizeof(a)/sizeof(a[0]);

int count0=0;int count1=0;int count2=0;
for( int i=0;i<n;i++){
if(a[i]==0){
    count0++;
}else if(a[i]==1){
    count1++;
}else{
    count2++;
}
}
    for(int i=0;i<count0;i++){
       a[i]=0;
    }


    for(int i=count0;i<(count0+count1);i++){
    a[i]=1;
    }
        for(int i=(count0+count1);i<n;i++){
        a[i]=2;
    }
printf("Array after sorting\n");
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
    return 0;
}
