#include<stdio.h>
#include<string.h>
struct studentDetails
{
    int age;
    char studentName[20];
}details, details2;
int main()
{
    FILE *filepointer;
    char character;
    puts("Enter student name\n: ");
    gets(details.studentName);
    puts("Enter age\n: ");
    scanf("%d", &details.age);
    filepointer = fopen("struct.txt", "w");
    fwrite(&details, sizeof(details), 1, filepointer);
    fclose(filepointer);
    filepointer = fopen("struct.txt", "r");
    fread(&details2, sizeof(details2), 1, filepointer );
    fclose(filepointer);
    printf("%s\n", details2.studentName);
    printf("%d\n", details2.age);
}

