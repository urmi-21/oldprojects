#include<stdio.h>
int main(int argc,char **argv)
{
    int i=1,j=0;
    char *word;
    for(i=1;i<argc;i++)
    {
	if(i==1)
	{
	    word=argv[i];
	}
	else
	{
	    char line[30];
	    char cc,c;
	    FILE *fp;
	    j=0;
	    fp=fopen(argv[i],"r");
	    if(fp!=NULL)
	    {
		int k=0,l;
		while((c=getc(fp))!= EOF)
		{
		    if((int)c==10)/*ascii value of \n is 10*/
		    {
			line[k]='\0';
			 l=find(line,word);
                        if(l==1)
                        {
                            printf("%s:\t%s",argv[i],line);
                            printf("\n") ;
                        }
                        k=0;
                    }
                    else
                    {
                        line[k]=c;
                        k++;
                    }        
                }
            }
            else
            {
                printf("grep:\t%s\t: No such File or directory\n",argv[i]);
            }
            
        }
    }
    return 0;
}
int find(char str[],char string[])
{
    int i,wlength=0,j=0,check=0,k;
    for(i=0;string[i]!='\0';i++);
    wlength=i;
    string[i]='\0';


    i=0;
    while(str[i]!='\0')
    {
    if(str[i]==string[0])
	{
	    k=0;
            for(j=0;j<wlength;j++)
            {
                if(str[i+j]==string[j])
                k++;
            }
            if(k==wlength)
            {            
              check=-1;                 
            }
        }
     i++;           
    }
    if(check!=-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
