/* Example from 1.6 Arrays */
# include <stdio.h>

// Count individual digits, whitespace, and other characters.
main()
{
  int c, i, white_chars, other_chars;
  int digits[10];

  white_chars = other_chars = 0;
  for (i = 0; i < 10; ++i)
    digits[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
      ++digits[c-'0'];
    else if (c == ' ' || c == '\t' || c == '\n')
      ++white_chars;
    else
      ++other_chars;
  }

  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", digits[i]);
  printf(", whitespace = %d, other = %d\n", white_chars, other_chars);
}