#include <stdio.h>
int main() {
    int count , counter , factorial;
    printf("Enter the number whose factorial is to be found: ");
    scanf("%d",&count);
    if (count <0 )
    {
        printf("Enter non negative integers.");
    }
    else if(count<=1)
    {
        printf("The factorial of %d is 1.", count );
    }
    else
    {
        factorial = 1;
        for (counter=2; counter<=count; counter++)
        {
            factorial = factorial*counter;
        }
        printf("The factorial of %d is %d .",count,factorial);
    }
    printf("\n");
    return 0;
}
