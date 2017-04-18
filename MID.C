#include<stdio.h>
#include<string.h>

int times(char *str,char *t);
void main()
{
 char *p;int count=0;
 char a[]="marry marry had a lamb marry";

 p=strtok(a," ");

 printf("\n\np=%s",p);



if(p!=NULL)
{
count=times(a,p);

printf("\nc=%d",count);
}
}

int times(char *str,char *t)
{
char *a;int c=0;



a=strstr(str,t);
printf("IN func a=%s",a);

if(a!=NULL)
{ c++;
  /*times(a,t);*/
}

return c;
}
