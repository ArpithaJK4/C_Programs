#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int temp = n;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    if (n < 10) {
        printf("0");
    }
    else if (n < 1000) {
        printf("%d", n % 10);
    } else {
        int sum = (n / (int)pow(10, count - 4)) % 10 + (n / (int)pow(10, count - 3)) % 10;
        printf("%d", sum);
    }

    return 0;
}
