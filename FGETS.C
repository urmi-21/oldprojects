/********************************************************************
 *
 * Purpose: Program to demonstrate the 'fgets' function.
 * 	    The prog will count the number of lines in a file.
 * 	    The is a function of the UNIX command 'wc'
 * Author:  M J Leslie
 * Date:    10-Apr-94
 *
 ********************************************************************/

#include <stdio.h>

#define LINE_LENGTH 80

main()
{
  FILE* fp;
  char line[LINE_LENGTH];
  char a[30];
  int count=0;
  char c;
  fp=fopen("home.txt","w");
  while((c=getchar())!=EOF)
  putc(c,fp);
  fclose(fp);
  fp=fopen("home.txt","r");
					/* Count up the lines here. */
  while ( fgets(line, LINE_LENGTH, fp) != NULL)
  { count++;
    printf("line:%s",line);

    }

  printf("File contains %d lines.\n", count);


  fclose(fp);
}
