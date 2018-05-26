#include<stdio.h>
struct studentDetails
{
    int age;
    char studentName[20];
}details;
int main()
{
    int choice;
    char noOfBytesRead;
    FILE * filepointer;
    while(1)
    {
        printf("1.Add Details\n2.Show Details\n3.Stop\n");
        scanf("%d", &choice);
        if( choice == 1)
        {
            printf("Enter student name\n:");
            scanf("%s", details.studentName);
            printf("Enter age\n:");
            scanf("%d", &details.age);
            filepointer = fopen("structloop.txt", "a");
            fwrite(&details, sizeof(details), 1, filepointer);
            fclose(filepointer);
        }
        if(choice == 2)
        {
            filepointer = fopen("structloop.txt", "r");
            if(filepointer !=0)
            {
                noOfBytesRead = fread(&details, sizeof(details), 1, filepointer);
                printf("%s\n", details.studentName);
                printf("%d\n", details.age);
                while(noOfBytesRead!= 0)
                {
                   noOfBytesRead = fread(&details, sizeof(details), 1, filepointer);
                    if(noOfBytesRead!= 0)
                    {
                    printf("%s\n", details.studentName);
                    printf("%d\n", details.age);
                    }
                }
                fclose(filepointer);
            }
            else
            {
            fclose(filepointer);
            printf("file doesnt exist.\n");
            break;
            }
        }
        if( choice == 3)
            break;
    }
    return 0;
    
}



