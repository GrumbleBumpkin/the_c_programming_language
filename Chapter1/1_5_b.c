/*
Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.
*/
# include <stdio.h>

main()
{
  int c;
  
  c = getchar() != EOF;

  printf("%d\n\n", c);
}