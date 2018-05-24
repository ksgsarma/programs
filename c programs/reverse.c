#include<stdio.h>
int main()
{
    int number, reverse = 0, count;
    printf("Enter the number: ");
    scanf("%d",&number);
    count = number;
    while ( number > 0 )
    {
        reverse = reverse*10 + number%10;
        number = number/10;
    }
    printf("The reverse of %d is %d .",count,reverse);
}


