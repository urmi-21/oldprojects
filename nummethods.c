

/*
----------------------------------------------------------------------------------------
C program for implementing 1.Euler Method, 2.Taylor series Method, 3. Runge-Kutta Method
To solve a given Differential Equation.


 
NUMERICAL METHODS: C Program, (c) Urminder Singh S.A.U 2010


----------------------------------------------------------------------------------------
*/



#include<stdio.h>
#include<math.h>

double func(float x,float y)
{ return ((2*x)+y);

}


void euler(float x,float y, float h,double dy,int m)            /*function for euler's method*/
  { int i;

  printf("        ------------------------------------");
  printf("\n\t|    x    |       y    |     y'=2x+y|");
  for(i=0;i<=m;i++)
  {
    dy=func(x,y);
    printf("\n\t|%f |    %f|    %f|",x,y,dy);
    x=x+h;
    y=y+h*dy;
   }
  printf("\n        ------------------------------------");
  getch();
 }


int dfunc(float x,float y)                       /*function to calculate y'(0)*/
  { return (y);
   }

						 /*function to calculate factorial*/
int fact(int x)
  { if(x==1 ||x==0)
    return 1;
    return x*fact(x-1);
  }


void taylor(float x,int ar[])                    /*function for Taylor series*/
{double s[7],sum=0.0;int i;


for(i=0;i<7;i++)
{int h=fact(i);

 s[i]=(ar[i]*pow(x,i))/h;

}
for(i=0;i<7;i++)
{
 sum=sum+s[i];
 }


printf("\n\ny(%1.1f)=%f",x,sum);

getch();
}

main()
{ float x;
  float y=0.0;
  double dy;
  int i,m,k;

printf("\nEnter x to find y(x):");
scanf("%f",&x);

printf("\nEnter the intial condition y(0)=");
scanf("%f",&y);

printf("\nTo Find y(%1.1f)..",x);                                   /*Print Menu*/
printf("\n\tChoose a Method");
printf("\n\t1.Euler's Method");
printf("\n\t2.Taylor Series");
printf("\n\t3.Runge-Kutta Method\nenter choice 1,2 or 3...");

scanf("%d",&k);
if(k==1)
{ float h,dy=0.0;
  int v=0;
  int m;
  printf("\nEnter step h:");
  scanf("%f",&h);
  m=(x/h)+1;
  euler(v,y,h,dy,m);

}

else if(k==2)
{float c;
int i,a[8];

c=dfunc(0,y);
 a[0]=y;
 a[1]=c;
 for(i=2;i<7;i++)
 { a[i]=3;
 }
printf("\ny(x)=y(0) + y'(0)x +y''(0)x^2.....\n");

taylor(x,a);
}

else if(k==3)
{ float v=0.0,h,ar[4],r=0.0;int i;
 float t=y;

 printf("\nEnter h:");
 scanf("%f",&h);
 printf("h=%f",h);
 for(i=0;i<3;i++)
 {
 ar[i]=h*func(v,y);
  printf("\nk_%d=%f",i+1,ar[i]);
  v=0,y=1;
  v=v+(0.5*h);
  y=y+(0.5*ar[i]);
}
v=0;y=t;
ar[3]=h * func(v+h,y+ar[2]);
printf("\nk_4=%f",ar[3]);
r=(ar[0]+ar[3]);
r=r+ar[1]+ar[1];

r=r+ar[2]+ar[2];

r=0.1666*r;

printf("\ny=%f",1+r);
}






else
printf("Invalid choice now terminating....");
getch();


return 0;
}                                        /*End of Main.......*/
