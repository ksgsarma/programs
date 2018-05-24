#include <stdio.h>
int main()
{
    int count, sum;
    printf("Enter the number whose sum is to be found: ");
    scanf("%d",&count);
    if ( count<0 )
        printf("Enter non negative integers.");
    else
    {
        sum = count * count ;
        printf("The sum is %d. ", sum);
    }
}
