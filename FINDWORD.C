#include<stdio.h>
void LowerString(char StringToProcess[]);


int main()
{
	char str[100];
	char word[10];
	char str1[100];
      int paragraphLength=0,i=0,wlength=0;
	int wordno=1,wordNavigator=0,j=0,check=0;int found=0;
      
	printf("Enter the paragraph=");
	fgets(str,100,stdin);
	LowerString(str);


	printf("\nEnter the word=");
	fgets(word,10,stdin);
	LowerString(word);
	
	
	
	
	while(str[i]!='\0')
	{			
		i++;
	}
	paragraphLength=i-1;
	i=0;

	while(word[i]!='\0')
	{
		i++;
	}
	word[i-1]='\0';
	wlength=i-1;

	printf("\nThe paragraphLength of character=%d",paragraphLength);
	printf("\nThe wordLength=%d",wlength);
	
	
	for(i=0;i<paragraphLength;i++)
	{
		if(str[i]==' '||str[i]==','||str[i]=='.'||str[i]=='\n'||str[i]=='?')
		{
			if(str[i+1]==' ')
			{
				i++;				
				wordno++;
			}
			else
			{
				wordno++;
			}
		}

		if(str[i]==word[wordNavigator])
		{
			if(str[i-1]!=' ' && i>0 )
			{
				break;
			}
			if(str[i+1]==' '||str[i+1]==','||str[i+1]=='.'||str[i+1]=='\n'||str[i+1]=='?')
			{
				check=1;found++;
				printf("\n The word %s found at location %d.\n",word,wordno);
				break;
			}
			for(j=1;j<wlength;j++)
			{
				if(str[i+j]==word[j])
				{
					if(j==wlength-1)
					{
						if(str[i+j+1]==' '||str[i+j+1]==','||str[i+j+1]=='.'||str[i+j+1]=='\n'||str[i+j+1]=='?')
						{
							check=1;found++;
							printf("\n The word %s found at location %d.\n",word,wordno);
							break;
						}
					}
				}
			}
		}
        
	}
	
	if(check==0 ||found==0)
	{
		printf("\nTHe word is not found");
	}
	printf("\n");

	return 0;
}

void LowerString(char StringToProcess[])
{
	int I;
	for(I=0;StringToProcess[I];I++)
		StringToProcess[I]=tolower(StringToProcess[I]);

}
