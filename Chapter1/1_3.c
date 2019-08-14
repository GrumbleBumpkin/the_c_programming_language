/* Exercise 1-5 */
#include <stdio.h>

#define   LOWER   0     // Lower limit of temperature table.
#define   UPPER   300   // Upper limit.
#define   STEP    20    // Step size.

main()
{
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
}