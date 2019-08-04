/* Exercise 1-3. */
#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    // Lower limit of temperature table.
  upper = 300;  // Upper limit.
  step = 20;    // Step size.

  fahr = lower;
  printf("Fahrenheit\tCelsius\n\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%10.0f\t%7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}