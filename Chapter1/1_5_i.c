/*
Exercise 1-12: Write a program that prints its input one word per line.
*/
# include <stdio.h>

# define IN 1   // Inside a word.
# define OUT 0  // Outside a word.

main()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t') // Not yet sure how to implement \n.
    {
      if (state == IN)
        printf("\n");
      state = OUT;
    }
    else
    {
      state = IN;
      putchar(c);
    }
  }
}