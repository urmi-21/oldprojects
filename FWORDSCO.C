#include<stdio.h>
#include<stdlib.h>
void printIt(char b[][15], int rows);

int main(int argc,char **argv)
{ char a[50];
  char b[15][15];
  int i, row, col;
  FILE *fp;
  fp = fopen(argv[1],"r");
  fgets(a,50,fp);
  printf("\nline%s\n",a);


  i = row=col=0;
  while(a[i]!='\0')
  {
    while(a[i] != ' ' && a[i]!='\0') {
       b[row][col]= a[i];
       col++;
       i++;
     }
     b[row][col]='\0';
     row++;
     col=0;
     i++;
  }

  printIt(b, row-1);
  printf("\n\n\t\t\t    press enter when ready");
  (void) getchar();
  return 0;
}
void printIt(char b[][15], int row)
 {
  int i;
  printf("\n\nwords are: \n");
  for(i=0;i<row;i++)
    printf("\n%s",b[i]);
}
