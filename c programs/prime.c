#include<stdio.h>
int main()
{
    int count, counter = 2;
    printf("Enter the number: ");
    scanf("%d",&count);
    if ( count < 1 )
        printf("Enter natural numbers.");
    else if ( count == 1 )
        printf("The number 1 is neither prime nor composite.");
    else
    {
        while ( counter*counter <= count)
        {
            if ( count % counter == 0 )
                break;
            counter ++;
        }
        if ( count % counter == 0 )
            printf("The number %d is not prime.", count);
         else
            printf("The number %d is prime.", count);
    }
}


