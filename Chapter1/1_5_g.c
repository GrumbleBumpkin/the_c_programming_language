/* Exercise 1-9 */
# include <stdio.h>

main()
{
  int c, was_space;

  was_space = 0;
  while ((c = getchar()) != EOF)
  {
    if (c != ' ' || (was_space == 0 && c == ' '))
      putchar(c);
    was_space = c == ' ';
  }
}