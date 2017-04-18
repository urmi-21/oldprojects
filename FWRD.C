#include<stdio.h>
#include<string.h>
main(int argc,char *argv[])
{int i;int c=1,a[15];
 FILE *fp;
 char line[100];
 fp=fopen(argv[1],"r");
 if(fp==NULL)
 printf("\nError opening File");

 i=0;
 while(fgets(line,200,fp)!=NULL)
  { for(i=0;i<strlen(line);i++)
    { if(line[i]==' ')
      {a[i]=c;
       c++;

      }

      }

    }
printf("c=%d",c);

return 0;
}