#include <stdio.h>
#include <string.h>

void printIt(char b[][15], int rows);

int main()
{
  int i, j, k, row, col;
  char a[200]={"Marry had a little had a a lamb"};

  char c[25][15];
  int count[25]={0};
  /*strcat(a,b);*/
  memset(c, '\0', sizeof(c));
  printf("%s", a);
  row=col=i=0;
  while(a[i]!='\0')
  {  while(a[i] != ' ' && a[i]!=',' && a[i]!='.' && a[i]!='\n' && a[i]!='\0') {
       c[row][col]= a[i];
       col++;
       i++;
     }
     c[row][col]='\0'; //add end of string marker char
     if(col)
       ++row;
     //get ready for a new row
     col=0;
     i++;
	}
  printIt(c, row);
  printf("\n\t\t\t    press enter to continue");
  (void) getchar();
  i=0;

  while(i<row)
  {
    j=i+1;

    while(j<row)
    {
      if((strcmp(c[i],c[j]))==0)
      {
	count[i]++;

	 if(count[i]!=0)
	{ //we have a repeated word
	  for(k=j;k<row;k++)
	    strcpy(c[k],c[k+1]);
	  --row;
	if(j=i+1){j--;}
	}
      }
      ++j;
    }
    ++i;
  }

  //list only the unique words, and their counts
  for(j=0;j<i;j++)
    printf("\nWord: %10s  Count: %d",c[j], count[j]+1);


  printf("\n\n\t\t\t    press enter when ready");
  (void) getchar();
  return 0;
}


void printIt(char c[][15], int row)
{
  int i;
  printf("\n\nwords are: \n");
  for(i=0;i<row;i++)
    printf("\n%s",c[i]);
}
