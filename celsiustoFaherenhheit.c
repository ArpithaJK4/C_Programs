//You are required to convertthe value of tempreture from drgree celsius to degree fahrenheit Appaly the various problem  solving  technique  to arrive at the desired solution to this problem Also write a c program for the problem and testy the problem  for three diffrent set of values 
#include <stdio.h>


float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
 
    float celsius_values[] = {0, 25, -10};
    int num_test_cases = sizeof(celsius_values) / sizeof(celsius_values[0]);

    printf("Celsius\tFahrenheit\n");
    printf("-----------------\n");

 
    for (int i = 0; i < num_test_cases; ++i) {
        float celsius = celsius_values[i];
        float fahrenheit = celsius_to_fahrenheit(celsius);
        printf("%.2f\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
