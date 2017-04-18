#include<stdio.h>
#include<stdlib.h>
# define n1 200

int top=0;
typedef struct{ char to,from,sp;
              int x;
            }hanoi;

hanoi *s;

void push(hanoi a)
  { if(top==n1-1)
      { puts("overflow");
        exit(0);
      }
   else
      { 
	s[top].to=a.to;
        s[top].from=a.from;
        s[top].sp=a.sp;
        s[top].x=a.x;
	top++;
     }
 }
hanoi pop()
  { hanoi a;
     if(top==-1)
        { puts("underflow");
          exit(0);
        }
      else
        { top--;
          a.to= s[top].to;
          a.from=s[top].from;
          a.sp=s[top].sp;
          a.x=s[top].x;
          return a;
        }
    }
int main()
  { int n,l=0,m;
    char c1,c2;
    printf("enter  the number of disks:");
    scanf("%d",&n);
    s=(hanoi *)calloc(sizeof(hanoi),n+1);
    
    hanoi s1,s2;
    s1.x=n,s1.to='C',s1.from='A',s1.sp='B';
    push(s1);
    
    if(n==1)
 	{printf("Move disk from %c to %c\n",s1.from,s1.to); exit(0);}
        

    while(top>0) 
     {

      while(s1.x>1)
       {  if(l==0)
           { s1.x--;
             if(s1.x==0)
               break;
             c1=s1.to;
             s1.to=s1.sp;
             s1.sp=c1;
             if(s1.x==1)
             { printf("move disk %d from %c to %c\n",s1.x,s1.from,s1.to);
               l=1;
               break;
             }  
             else
              push(s1);
              
           }
        else
         {  
               { s1.x--;
                 c1=s1.to;
                 s1.to=s1.sp;
                 s1.sp=c1;
               }
            if(s1.x==1)
             { printf("move disk %d from %c to %c\n",s1.x,s1.from,s1.to);
               break;
             }  
           else
              push(s1);
         } 
       }
        s1=pop();
        printf("move disk %d from %c to %c\n",s1.x,s1.from,s1.to);
        if(s1.x==2)
            { s1.x--;
              c2=s1.from;
              s1.from=s1.sp;
              s1.sp=c2;
              m=1;
              printf("move disk %d from %c to %c\n",s1.x,s1.from,s1.to);
  
            }
        else
             { 
               s1.x--;
               c2=s1.from;
               s1.from=s1.sp;
               s1.sp=c2;
               push(s1);
             }
      }    
          return 0;
 }

            
                 


