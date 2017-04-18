#include<stdio.h>
#include<stdlib.h>
struct commodity
            {
               char product[20];
               int cost;
               int i;
            };
void max_value(struct commodity comp[5],int n);
int main()
        {
          FILE *fp;
          int i,val;
          struct commodity stock[10],data[10];
          printf("Enter the NUMBER of stock.\n");
          scanf("%d",&val);
          printf("Enter the stock name in to the stock file.\n");
          for(i=0;i<val;i++)
             {
              scanf("%s",stock[i].product);
              scanf("%d",&stock[i].cost);
             }
          printf("\n");
 
        fp=fopen("stock.txt","w+");
        //fprintf(fp,"//PROD-NAME\t COST\n");
        for(i=0;i<val;i++)
            {
               fprintf(fp,"%s\t\t%d\n",stock[i].product,stock[i].cost);
            }
        fclose(fp);

        fp=fopen("stock.txt","r");
        printf("\nSL.no\tPRODUCT-NAME\tCOST");
        for(i=0;i<val;i++)
           {
              fscanf(fp,"%s%d",data[i].product,&data[i].cost);
              printf("\n%d\t%s\t\t%d\n",i+1,data[i].product,data[i].cost);
            }
        max_value(data,val);
       fclose(fp);
      
      return(0);
     }
void max_value(struct commodity comp[5],int n)
     {
       int i,max=0;
       for(i=1;i<n;i++)
           {
             if(comp[i].cost>comp[max].cost)
               {
                  max=i;
               }
           }
      printf("\nThe highest price item is %s and the cost is %d\n",comp[max].product,comp[max].cost);
} 

        
