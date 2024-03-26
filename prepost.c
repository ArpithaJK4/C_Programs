//write a c program to demonstrate  what impact  does the  postfix and prefix using increement  operator has on the value of an expression


#include <stdio.h>

int main() {
    int num = 5;
    int result_postfix, result_prefix;


    result_postfix = num++; 
    printf("Result using postfix increment: %d\n", result_postfix);

    result_prefix = ++num;
    printf("Result using prefix increment: %d\n", result_prefix);

    return 0;
}
