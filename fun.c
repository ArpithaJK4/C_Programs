
#include <stdio.h>

int a = 0, b = 8, c = 0; 
void fun(int a, int c); 

int main() {
    int b = 3; 
    printf("%d %d %d\n", a, b, c);
    
    fun(b++, a); 
    
    int c = --a; 
    printf("%d %d %d\n", a, b, c);
    
    return 0;
}

void fun(int a, int c) {
    b = --c; 
    a += 1;  
    printf("%d %d %d\n", a, b, c); 
}
