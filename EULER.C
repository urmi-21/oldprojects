#include<stdio.h>

double func(float x,float y)
{ return (2*x+y);
}
main()
{ float h,v;
  float x=0.0,y=0.0,c=0.0;
  double dy;
  int i,m;
printf("\nenter y");
scanf("%f",&v);
printf("\nenter h");
scanf("%f",&h);
printf("\nTo find y(%1.1f) with h=%1.1f",v,h);
m=(v/h)+1;

printf("\nEnter the intial condition y(0)=");
scanf("%f",&y);
printf("        ------------------------------------");
printf("\n\t|    x    |       y    |     y'=2x+y|");
for(i=0;i<m;i++)
{ c=y;
  dy=func(x,y);
  printf("\n\t|%f |    %f|    %f|",x,y,dy);
  x=x+h;
  y=c+h*dy;
 }
printf("\n        ------------------------------------");




}
