#include<stdio.h>
main()
{FILE *fp;
int a[20][20],b[20],i,j,k;
char c;
/*printf("Enter file\n\n");
fp=fopen("N2.txt","r");

while((c=getchar())!=EOF)
putc(c,fp);

fclose(fp);*/
fp=fopen("N2.txt","r");
i=0;
k=0
while((c=getc(fp))!=EOF)
{
  if(c=='\t')

   break;
   else
  { a[i][k]=c;
    i++;      }
	       k++;
}

a[i][k]='\0';
printf("\nA=\n");
for(j=0;j<i;j++)
printf("%c",a[j]);

fclose(fp);
}