/* Example from Section 1.5.3 */
# include <stdio.h>

// Line counting.
main()
{
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);
}