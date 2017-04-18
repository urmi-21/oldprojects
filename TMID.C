/*Program to find word frequency using strstr()*/


#include<stdio.h>
#include<string.h>
main()
{
  char a[]="mary had a little lamb had had and it was that";   //orignal string
  char b[15][15];char *q;
  int i,row,col,j,k,cnt=0;
  i= row=col=0;
  while(a[i]!='\0')				      //to find all words and store in 2darray
  {
    while(a[i] != ' ' && a[i]!='\0') {
       b[row][col]= a[i];
       col++;
       i++;
     }
     b[row][col]='\0';
     row++;
     col=0;
     i++;
  }
  row--;
  printf("\n\n\tStart!!!");
  printIt(b, row);
  printf("\n\n\t\t\t    Press enter when ready");
  (void) getchar();

  i=0;
  while(i<row)                                        //eliminating repeating words
   { j=i+1;
     while(j<row)
      { if((strcmp(b[i],b[j]))==0)
	 {
	   for(k=j;k<row;k++)
	   strcpy(b[k],b[k+1]);
	    row--;
	   if(j=i+1)
	   {j--;}
	  }
	  j++;
	}
       i++;
     }



 for(i=0;i<row;i++)                                 //searching
  { q=a;cnt=0;
     while(q!=NULL)
      {q=strstr(q,b[i]) ;
       if(q==NULL)
       {break;}

       cnt++;

       q=q+strlen(b[i]);
       }
       printf("\n\n%s found %d times",b[i],cnt);
     }
      printf("\n\n\t\t\t\tPress Enter");
     (void) getchar();







}



printIt(char b[][15], int row)                       //func to print  words
{
  int i;
  printf("\nwords are: \n");
  for(i=0;i<row;i++)
    printf("\n%s",b[i]);
}



