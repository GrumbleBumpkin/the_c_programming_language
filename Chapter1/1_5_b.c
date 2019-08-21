/* Exercise 1-6 */
# include <stdio.h>

main()
{
  int c;
  
  c = getchar() != EOF;

  printf("%d\n\n", c);
}