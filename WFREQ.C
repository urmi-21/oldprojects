#include<stdio.h>
#include<conio.h>

int wfreq(char *para,char *word)
{char *x= word;
  int count=0;

  if(*word==NULL)
  {printf("NOT found");
   return 0;
   }
   for(;*para;para++)
   {if(*para==*word)
    {char *p,*q;
     for(p=para,q=word;;p++,q++)
      { if(*p!=*q)
	 break;
	}
	 if(*q=='\0')
	 {count++;


	 }

	}

      }

    return count;
   }

void main()
 {
 char a[]="marry had a is had is had had  lamb";
 char b[]="had";
 int c;
 clrscr();
c=wfreq(a,b);
printf("\nFound %d Times",c);


 }