#include<stdio.h>

int *stack;
int top;

void push(int i,int size)
{if(top>2*size)
  {printf("\nStack FULL");
   return;
   }
  else
  top++;
  stack[top]=i;

printf("top=%d",top);
}

int pop()
{if(top==-1)
 {printf("\nUnderflow");
  return;}
  --top;

  return stack[top];
}

main()
{int c,n,x,s,j;
 char ch='y';
 int *iptr;
  printf("\nenter stack size");
 scanf("%d",&s);
 stack=(int*)malloc(s*sizeof(int));
 top=-1;
 iptr=stack;

 while(ch=='y'){
 printf("\n\n\t\t\t\nenter\n1.push\n2.pop");
  scanf("%d",&c);
  if(c==1)
  {printf("\nenter no of items");
   scanf("%d",&n);
   getchar();
   if(top+n>=s)
    {printf("\nstack full reallocating");
     (void)getchar();
     stack=realloc(stack,(2*s));
     s=s*2;
     }
   for(j=0;j<n;j++)
   {printf("\nEnter:");
   scanf("%d",&x);
   push(x,s); }
   printf("\n\n\t\t\tnow stack:\n\n\n");
   for(iptr=stack+top;iptr>=stack;iptr--)
   printf("\t\t\t\n%d",*iptr);
  }

  if(c==2)
  {pop();
  printf("\n\t\t\tnow stack\n\n\n\n");
  for(j=top;j>=0;--j)
  printf("\t\t\t\n%d",stack[j]);
  }
  getchar();
  printf("\n\nmore???");

  scanf("%c",&ch);
  }
  }