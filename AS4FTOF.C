#include <ctype.h>
#include<stdio.h>
main(int argc,char **argv)
{char c,x;
 FILE *fp1,*fp2;
 printf("\n\nEnter Data:\n\n\n\n");
 fp1=fopen(argv[1],"w");
 while((c=getchar())!=EOF)
 putc(c,fp1);
 fclose(fp1);
 fp1=fopen(argv[1],"r");
 fp2=fopen(argv[2],"w");
 while((c=getc(fp1))!=EOF)
 {x=toupper(c);




 putc(x,fp2);

 }
fclose(fp1);
fclose(fp2);
printf("\nFile 2:");

fp2=fopen(argv[2],"r");

while((x=getc(fp2)!=EOF))
printf("%c",x);


fclose(fp2);


}
