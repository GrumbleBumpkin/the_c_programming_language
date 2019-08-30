/*
Exercise 1-9: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
*/
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