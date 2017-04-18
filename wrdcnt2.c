#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool wrddef (const char a)
{
     if ((a>='a' && a<= 'z') || (a>= 'A' && a<='Z'))
     return true;
     else
     return false;
}

int wrdcnt(const char test[])
{ 
   bool x=true, wrddef(const char a);
   int result=0;
   int i=0; 
       for (i; test[i] != '\0'; i++)
           {
           if (wrddef(test[i]))
           {
           if (x)
           {
           result++;
           x = false;
           }}
           else
           {
           x = true;
           }}
   return result;
}


int main(int argc, char* argv[])
{
   int c=1;
   int a=1;
   
   FILE* fo = fopen(argv[1],"r");
   char test[100];
   if (argc==0)
   {
      printf("Could not open file!\n");
      system("pause");
      exit(0);
   }
   if (argc!=2)
   {
      printf("Could not open file!\n");
      system("pause");
      exit(0);
   }
   else
   {
      while ((a=getc(fo))!= EOF)
      {
      test[c]=a;
      c++;
      }
         
   int wrdcnt (const char test[]);  
   printf("the number of words in the file are %i\n ",wrdcnt(test));
   }
   
fclose(fo);   
system("pause");
return 0;

}
