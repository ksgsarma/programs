#include<stdio.h>
#include<string.h>
int main()
{
    FILE *filepointer;
    char character, string[20];
    filepointer = fopen("abc.pages", "w");
    printf("Enter the data:\n");
    scanf("%s", string);
    fputs(string, filepointer);
    fclose(filepointer);
    filepointer = fopen("abc.pages", "r");
    while((character = fgetc(filepointer))!= EOF)
          {
              printf("%c",character);
              
          }
    printf("\n");
    fclose(filepointer);
    return 0;
}
          
