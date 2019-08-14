/* Exercise 1-4. */
#include <stdio.h>

#define   LOWER   0     // Lower limit of temperature table.
#define   UPPER   300   // Upper limit.
#define   STEP    20    // Step size.

main()
{
  float fahr, celsius;

  celsius = LOWER;
  printf("Celsius\t\tFahrenheit\n\n");
  while (celsius <= UPPER) {
    fahr = ((9.0/5.0) * celsius) + 32.0;
    printf("%7.0f\t\t%10.1f\n", celsius, fahr);
    celsius = celsius + STEP;
  }
}