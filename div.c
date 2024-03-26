//Using the modulo division operater  qwrite a program to determine if the given number is divisible by 7 or not

#include <stdio.h>

int main() {
    int number;

   
    printf("Enter a number: ");
    scanf("%d", &number);

   
    if (number % 7 == 0) {
        printf("%d is divisible by 7.\n", number);
    } else {
        printf("%d is not divisible by 7.\n", number);
    }

    return 0;
}
