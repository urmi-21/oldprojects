#include<stdio.h>
#include<string.h>
main()
{ char a[]="string1",b[]="string2";
  char t[10][10];
  int j=0,r=6,i,k;

   for(i=0;i<r;i++)
   {printf("\nenter:s");
   gets(*(t+i));
   }

 for (i=0;i<r;i++)
  printf("\nVals=%s",*(t+i));

//printf("\n*t=%s",t[2]);


 j=i=0;
 while(i<r)
 { j=i+1;
   while(j<r)
     { if((strcmp(t[i],t[j]))==0)
	 { for(k=j;k<r;k++)
	   {strcpy(t[j],t[j+1]);
	   }
	  --r;
	  if(j=i+1){j--;}
	 }j++;
      }i++;
  }

 for(k=0;k<r;k++)
 {printf("\n\nString without reptions:%s",t[k]);}


}