#include<stdio.h>
#include<string.h>
main(int argc,char**argv)
{
 char c,a[100];
 FILE *fp1,*fp2,*fp3;
 int l1=0,l2=0,t=0,i=0,d=0,r1,r2,ch;
 char e[100][100],f[100][100];

 r1=r2=0;
 fp1=fopen(argv[1],"r");
 fp2=fopen(argv[2],"r");

 while(fgets(a,100,fp1)!=NULL)
 {l1++;

 strcpy(*(e+r1),a);
  r1++;
 }

 while(fgets(a,100,fp2)!=NULL)
 {l2++;

 strcpy(*(f+r2),a) ;
 r2++;
 }

printf("\n\n F1 :\n\n");
for(i=0;i<l1;i++)
{printf("%s",e[i]);
}


printf("\n\nLines from F2:\n\n");
for(i=0;i<l2;i++)
{printf("%s",f[i]);
}
fp3=fopen("F3.txt","w");
printf("\n\n");
if(l1>=l2)
{ d=l2;}
else
d=l1;

 for(i=0;i<d;i++)
  {fputs(e[i],fp3);
   fputs(f[i],fp3);
   t++;
  }

if(d==l1)
{fputs("\n",fp3);
for(i=t;i<l2;i++)
fputs(f[i],fp3);
}

if(d==l2)
{fputs("\n",fp3);
 for(i=t;i<l1;i++)
  fputs(e[i],fp3);

}

fclose(fp1);
fclose(fp2);
fclose(fp3);
printf("\t\t\n\n\tDONE!!!!!press enter to see the new file\n\n");
(void)getchar();
fp3=fopen("F3.txt","r");
while(fgets(a,100,fp3)!=NULL)
printf(a);

return 0;

}