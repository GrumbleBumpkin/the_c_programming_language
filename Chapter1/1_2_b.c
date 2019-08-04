/* Exercise 1-4. */
#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    // Lower limit of temperature table.
  upper = 300;  // Upper limit.
  step = 20;    // Step size.

  celsius = lower;
  printf("Celsius\t\tFahrenheit\n\n");
  while (celsius <= upper) {
    fahr = ((9.0/5.0) * celsius) + 32.0;
    printf("%7.0f\t\t%10.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}