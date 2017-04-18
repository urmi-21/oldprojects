#include<stdio.h>

int  mystr(char *para,char *word,int lineno)
{ char* x=para;int count=0;
  if(*word==NULL)
 {printf("!!!No word Entered to search Try Again!!!!\n\n");
  exit(0);
  }
  for(;*para;++para)
   {
     if(*para==*word)
      { char *p,*q;
       p=para;q=word;
       for(;;p++,q++)
	 { if(*p!=*q)
	   break;
	  }
	if(*q=='\0')
	  {count++;

	   para=x;
	   printf("\nMatch At Line_No %d:%s",lineno,para);
	  return count;
	  }
	}
      }
      return 0;
}


main(int argc,char **argv)
{
  int f;
  char a[100];
  int l=0,j=0,s=0,ar[200],i=0;


 FILE *fp;
 fp=fopen(argv[1],"r");
 if(fp==NULL)
 printf("\n!!!Wrong File Name!!!\n\n");

 while(fgets(a,100,fp)!=NULL)
  {l++;
  f=mystr(a,argv[2],l);
   ar[j]=f;
   j++;
   }
  ar[j]=9999;
 while(ar[i]!=9999)
 {
  s=s+ar[i];
  i++;

  }
 if(s!=0)
 printf("\n\n!!Total Matches %d Times\n\n",s);
 else
 printf("\n\n!!!Not Found!!!\n\n");


 }