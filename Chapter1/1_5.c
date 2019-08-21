/* Sample from 1.5.1 File Copying */
# include <stdio.h>

// Copy input to output, version 2.

main()
{
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}