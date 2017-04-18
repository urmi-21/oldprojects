#include <stdio.h>
#include <math.h>
int func(float x, float y)
{return (2*x+y);
}
int dfunc(float x,float y)
{ return (y);
 }
int fact(int x)
{ if(x==1 ||x==0)
  return 1;
  return x*fact(x-1);
}

main()
{float x,y,c;double s[7],sum=0.0;
 int i,a[8];

 printf("\nEnter the initial condition y(0)=");
 scanf("%f",&y);
 printf("\nEnter x");
 scanf("%f",&x);
 c=dfunc(0,y);
 a[0]=y;
 a[1]=c;
 for(i=2;i<7;i++)
 { a[i]=3;
 }
printf("\ny(x)=y(0) + y'(0)x +y''(0)x^2.....\n");

for(i=0;i<7;i++)
{int h=fact(i);

 s[i]=(a[i]*pow(x,i))/h;

}
for(i=0;i<7;i++)
{
 sum=sum+s[i];
 }


printf("\n\ny(%1.1f)=%f",x,sum);

}