#include<stdio.h>
#include "stack.h"
 int a[10];
    int top=0;




main()
{ int c,x,j,n;char ch='y';
  while(ch=='y')
 {printf("\t\t\t\nenter\n1.push\n2.pop");
  scanf("%d",&c);
  if(c==1)
  {printf("\nenter no of items");
   scanf("%d",&n);
   getchar();
   for(j=0;j<n;j++)
   {printf("\nEnter:");
   scanf("%d",&x);
   push(x); }
   printf("\n\n\t\t\tnow stack:");
   for(j=top-1;j>=0;--j)
   printf("\n%d",a[j]);
  }

  if(c==2)
  {pop();
  printf("\n\t\t\tnow stack");
  for(j=top-1;j>=0;--j)
  printf("\n%d",a[j]);
  }
  getchar();
  printf("\n\nmore???");

  scanf("%c",&ch);
  }
  }