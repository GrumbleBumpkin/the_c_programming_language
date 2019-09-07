/*
Exercise 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\.
*/
# include <stdio.h>

main()
{
  int c;
  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')  // Can't test in standard terminal.
      printf("\\b");
    else if (c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }
}