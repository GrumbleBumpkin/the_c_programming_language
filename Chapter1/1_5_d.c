/* Example from Section 1.5.2 */
# include <stdio.h>

// Count characters in input, version 2.
main()
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}