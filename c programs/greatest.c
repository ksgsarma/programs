#include<stdio.h>
int main()
{
    int number[3], index , counter = 1;
    printf("Enter the 3 numbers: ");
    for ( index = 0; index < 3; index ++)        scanf("%d",&number[index]);
    index = 0;
    while (counter < 3)
    {
        if ( number[counter] > number[index])
            index = counter;
        counter ++;
    }
    printf("The greatest of all 3 numbers is %d.",number[index]);
}


