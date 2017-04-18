#include<stdio.h>
//#define size 10
 int *a;
 int top=0;
 int s=0;

int push(int i)
{
 if(top==s)
  {printf("\nStack full");
   return 0;
   }
   a[top]=i;
   ++top;
}
int pop()
 {if(top==0)
   {printf("\n\nStack empty");
    (void)getchar();
    exit(0);
    }
    --top;

}

main()
{ int c,x,j,p=1,n;char ch='y';
  printf("\nEnter size of stack..\n");
  scanf("%d",&s);
  a=(int *)malloc(s*(sizeof(int)));


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
   p=push(x);
     if(p==0)
     { printf("\n\nNow reallocating.\t Press Enter\n\n");
       (void)getchar();
       a=realloc(a,2*(s*(sizeof(int))));
       p=1;
       s=s*2;
       push(x);
     }

   }
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