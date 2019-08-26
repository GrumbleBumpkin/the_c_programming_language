/* Exercise 1-9 */
# include <stdio.h>

main()
{
  int c, nl, was_space;

  nl = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' && was_space == 0)
      {
        was_space = 1;
        putchar(c);
      }
    else if (c == ' ' && was_space == 1)
      ;
    else if (c != ' ')
      {
        was_space = 0;
        putchar(c);
      }
  }
  printf("%d\n", nl);
}