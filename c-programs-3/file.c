#include<stdio.h>
#include<stdlib.h>
int main(){
     FILE *file;
     char str[100];
     int i;
     file=fopen("sample.txt","w");
     if (file==NULL)
     {
        printf("Unable to open the file\n");
        return 1;
     }
     printf("Enter the string:\n");
     fgets(str,100,stdin);
     fputs(str,file);
     fclose(file);
     file=fopen("sample.txt","r");
     if (file=NULL)
     {
        printf("Unable to open the file\n");
        return 1;
     }
     while ((i=fgetc(file))!=EOF)
     {
        printf("%c",i);
     }
     fclose(file);
    return 0;
}
