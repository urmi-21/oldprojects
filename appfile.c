#include <stdio.h>
int main()
{
    FILE *fp
    file = fopen("file.txt","a");
    fprintf(fp,"%s","This is just an example :)"); /*append some text*/
    fclose(fp);
    return 0;
}
