/* Example from Section 1.5.2 */
# include <stdio.h>

// Count characters in input, version 1.
main()
{
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}