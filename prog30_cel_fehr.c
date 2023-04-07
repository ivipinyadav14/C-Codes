// WAP to convert into fehrenheit
#include <stdio.h>

float convertTemp(float celsius);

int main()
{
    float celsius;
    printf("Enter the temperature in celsius :");
    scanf("%f", &celsius);
  //  float fahrenheit = convertTemp(celsius);
    printf("Temperature in Fahrenheit is %0.3f",convertTemp(celsius));

    return 0;
}

float convertTemp(float celsius)
{
    float fahrenheit = celsius * (9.0 / 5.0) + 32;
    return fahrenheit;
}