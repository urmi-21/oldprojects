#include<stdio.h>
#include<string.h>
main()
{ FILE *fp;
 // char a[]="mary had a little lamb had had and it was that";   //orignal string
  char b[100][15];char t[100][50];char *q;
  char line[100]; char c;int r=0;
  int i,row,col,j,k,cnt[100]={0};
  i= row=col=0;
  fp=fopen("mid","w");
  if(fp==NULL)
  {printf("\nerror");
   exit(0); }

  printf("\n\nEnter file:");
  while((c=getchar())!=EOF)
  putc(c,fp);

  fclose(fp);
 fp=fopen("mid","r");

  while(fgets(line,100,fp)!=NULL)
  {  r++;
     printf("\n\nlines=%s",line);
     strcpy(*(t+i),line);
     i++;

 }
  printf("rows=\=%d",r);
  printf("\t\n\nTemp file With arrays:");
  for(j=0;j<i;j++)
  {printf("\t\n\n%s",t[j]);
   }


  j=i=0;
 while(i<r)
 { j=i+1;
   while(j<r)
     { if((strcmp(t[i],t[j]))==0)
	 { for(k=j;k<r;k++)
	   {strcpy(t[j],t[j+1]);
	   }
	   r--;
	  if(j=i+1){j--;}
	 }j++;
      }i++;
  }
 puts("string now");
 for(k=0;k<r;k++)
{ printf("\n:%s",t[k]);}














/* printf("\n\n\tStart!!!");
  printIt(b, row);
  printf("\n\n\t\t\t    Press enter when ready");
  (void) getchar();

  i=0;
    while(i<row)
  {
    j=i+1;

    while(j<row)
    {
      if((strcmp(b[i],b[j]))==0)
      {
	cnt[i]++;

	 if(cnt[i]!=0)
	{ //we have a repeated word
	  for(k=j;k<row;k++)
	    strcpy(b[k],b[k+1]);
	  --row;
	if(j=i+1){j--;}
	}
      }
      ++j;
    }
    ++i;
  }

  //list only the unique words, and their counts
  for(j=0;j<i;j++)
    printf("\nWord: %10s  Count: %d",b[j], cnt[j]+1);


  printf("\n\n\t\t\t    press enter when ready");
  (void) getchar();
  return 0;
}




printIt(char b[][15], int row)                       //func to print  words
{
  int i;
  printf("\nwords are: \n");
  for(i=0;i<row;i++)
    printf("\n%s",b[i]);
}


 */
 }