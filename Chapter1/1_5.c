/* Sample from 1.5.1 File Copying */
# include <stdio.h>

// Copy input to output, version 1.

main()
{
  int c;

  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
}