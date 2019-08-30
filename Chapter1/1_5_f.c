/*
Exercise 1-8: Write a program to count blanks, tabs, and new lines. (Assumed to be total count).
*/
# include <stdio.h>

main()
{
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n' || c == ' ' || c == '\t')
      ++nl;
  printf("%d\n", nl);
}