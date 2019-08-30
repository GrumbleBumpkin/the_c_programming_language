/* Example from 1.5.4 Word Counting */
# include <stdio.h>

# define IN 1   // Inside a word.
# define OUT 0  // Outside a word.

main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("%d line(s), %d word(s), %d character(s)\n", nl, nw, nc);
}

/*
Exercise 1-11: How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?

Generally input values that lie at the extremes of an expected input are more likely to reveal bugs, so I would try some of the following ideas:
  - Input that's 0 length.
  - Input that's exceptionally long (try to overflow nc).
  - Unicode input, especially something like utf-32 (see what getchar() does with special encoding).
*/