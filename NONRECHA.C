#include<stdio.h>
#include<conio.h>
#include<math.h>
typedef struct
	{ int n,f;
	  char s,d,sp;
	  }stt;

hanoi(int, char,char,char);
main()
{

 stt a;
 a.s='1';
 a.d='3';
 a.sp='2';
 printf("\nEnter the no of disks:");
 scanf("%d",&(a.n));

 printf("\n\nNo of disks=%d",a.n);

 hanoi(a.n,a.s,a.d,a.sp);
getch();
clrscr();
}
hanoi(int n,char a,char c,char b)
{ int f=0;
   if(n==1)
    {printf("\n\nMove from %c to %c",a,c);
    }
label1:
   if((n%2)==0)
   {//printf("\neven");
    printf("\n\nMove %c to %c",a,b);
    f++;
   if(f>=(pow(n,2))-1){exit(0);}
   goto label2;
   }

label2:
    printf("\n\nmove %c to %c",a,c);
    f++;
    if(f>=(pow(n,2))-1){exit(0);}
    n=n-1;
    goto label1;



  return 0;

  }