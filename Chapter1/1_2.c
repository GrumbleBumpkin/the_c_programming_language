/* Exercises 1-3 and 1-4. */
#include <stdio.h>

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;    // Lower limit of temperature table.
  upper = 300;  // Upper limit.
  step = 20;    // Step size.

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}