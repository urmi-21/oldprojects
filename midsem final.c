#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int wfreq(char *para,char *word)
{
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

	 {
	  count++;
	  }
       }

      }

    return count;
   }


main()
{int i,r,c,l,j,k,cnt=0;
 char a[25],ch;
 char b[10][10];
 FILE *fp=fopen("midsemf.txt","w");
 printf("\n\n\nEnter data");
 while((ch=getchar())!=EOF)
 putc(ch,fp);
 fflush(fp);
 fclose(fp);

 fp=fopen("midsemf.txt","r");

 fgets(a,100,fp);




 printf("\n\n****Findin Words****\n\n");
 l=strlen(a);
 printf("\nWordlen=%d\n",l);

 i=r=c=0;
 while(a[i]!='\0')
 { while(a[i]!=' ' && a[i]!='\0')
   {  b[r][c]=a[i];
      c++;
      i++;
     }
      b[r][c]='\0';
      r++;
      c=0;
      i++;
    }
   r--;

    printf("\n\nWords are:\n");
    for(j=0;j<r;j++)
      {
	printf("\n%s",b[j]);
      }
   i=0;
   while(i<r)
   { j=i+1;
     while(j<r)
      {if((strcmp(b[i],b[j])==0))
       { for(k=j;k<r;k++)
	 { strcpy(b[k],b[k+1]);
	   r--;
	   }
	  }
	  j++;
	  }
	  i++;
	  }





fclose(fp);
fp=fopen("result.txt","w");


for(j=0;j<r;j++)

{cnt=wfreq(a,b[j]);


fprintf(fp,"%s appears %d times\n\n",b[j],cnt);

}

fclose(fp);




return 0;
}