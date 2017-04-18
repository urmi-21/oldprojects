#include<stdio.h>
#define LINE_LENGTH 80


char * mystr(char *para,char *word)
{ int count;
  if(*word=='\0')
 {return para;
  }
  count=0;
  for(;*para;++para)
   {  count++;
     if(*para==*word)
      { char *p,*q;
       p=para;q=word;
       for(;;p++,q++)
	 { if(*p!=*q)
	   break;
	  }
	if(*q=='\0')
	  {printf("\n\nfound at =%dth position",count);
	  return para;
	  }
	}
      }
      return 0;
}



main()
{
  FILE* fp;
  char line[LINE_LENGTH];
  char a[30];
  int count=0;
  char c;
  char *found;
  printf("\n\nenter para\n");
  fp=fopen("home.txt","w");
  while((c=getchar())!=EOF)
  putc(c,fp);
  fclose(fp);
  fp=fopen("home.txt","r");
					/* Count up the lines here. */
  while ( fgets(line, LINE_LENGTH, fp) != NULL)
    count++;
    printf("File contains %d lines.\n", count);


    printf("line:%s",line);
    printf("\nenter word:");

    scanf("%s",a);

    found=mystr(line,a);
    if(found!='\0')
    {printf("%s",found);
     }
    else
    printf("fail!!!!");





  fclose(fp);
}
