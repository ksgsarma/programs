#include<stdio.h>
#include<time.h>
void isPrime(int);
int main()
{
    int count;
    clock_t t;
    t = clock();
    printf("Enter the number: ");
    scanf("%d", &count);
    if ( count < 1 )
    {
        printf("Enter natural numbers.\n");
    }
    else if ( count == 1 )
    {
        printf("The number 1 is neither prime nor composite.\n");
    }
    else if ( count < 4 )
    {
        printf("The number %d is prime.\n", count);
    }
    else
    {
        isPrime(count);
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("time taken to execute is %f seconds.", time_taken);
    return 0;

}
void isPrime(int x)
{
    int counter = 2;
    while ( counter < x)
    {
        if ( x % counter == 0 )
        {
            break;
        }
        counter ++;
    }
    counter --;
    if ( x % counter == 0 )
    {
        printf("The number %d is not prime.\n", x);
    }
    else
    {
        printf("The number %d is prime.\n", x);
    }
}
