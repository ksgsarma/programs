#include<stdio.h>
int main()
{
    int count, counter = 2, sum = 0;
    printf("Enter the number upto which the sum of even numbers is to be found: ");
    scanf("%d",&count);
    if ( count < 0)
        printf("Enter natural numbers.");
    else if ( count < 2)
        printf("The sum of even numbers upto %d is 0.", count);
    else
        while ( counter <= count )
        {
            sum = sum + counter;
            counter = counter + 2;
        }
    printf("The sum of even numbers upto %d is %d.",count,sum);
}
