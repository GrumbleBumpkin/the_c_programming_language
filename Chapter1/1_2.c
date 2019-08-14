/* Exercise 1-3. */
#include <stdio.h>

#define   LOWER   0     // Lower limit of temperature table.
#define   UPPER   300   // Upper limit.
#define   STEP    20    // Step size.

main()
{
  float fahr, celsius;

  fahr = LOWER;
  printf("Fahrenheit\tCelsius\n\n");
  while (fahr <= UPPER) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%10.0f\t%7.1f\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}