#include <stdio.h>

#define SIZE 30

int main()
{

  char city1[SIZE];

  int inchar;
  FILE *infile;
  char *inname = "test.txt";

  int i;

  infile = fopen(inname, "r");
  if (!infile) {
    printf("Couldn't open %s for reading\n");
    return 0;
  }

  for (i = 0; i < SIZE - 1; i++) {
    inchar = fgetc(infile);
    if (inchar == '\t') {
      printf("%d: tab encountered\n", i); /* print is for debug purposes only */
      break;
    }
    else {
      city1[i] = inchar;
    }
  }
  city1[i] = '\0';

  printf("city1: <%s>\n", city1);

  return 0;
}
