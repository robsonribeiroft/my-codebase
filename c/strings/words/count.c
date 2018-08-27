/*
  Counts the number of words in a string,
  Given the string

  header:
  ctype.h
*/
int countWords(char * string)
{
  /* states */
  int IN = 1;
  int OUT = 0;

  /* from args */
  int characters = strlen(string);
  
  /* aux */
  char *cursor;
  int state, letter;

  /* result */
  int n_words;
  

  /* init on first char of string */
  letter = 1;
  cursor = &string[0];


  /* init state and n_words */
  if (isspace(*cursor))
    {
      state = OUT;
      n_words = 0;
    }
  else
    {
      state = IN;
      n_words = 1;
    }

  /* map each char of string,
     and add 1 to n_words when enter in a word
   */
  while (letter < characters)
    {
      cursor = &string[letter];
      if (isspace(*cursor))
	{
	  state = OUT;
	}
      else if (state == OUT)
	{
	  n_words++;
	  state = IN;
	}

      letter++;
    }

  return n_words;
}
