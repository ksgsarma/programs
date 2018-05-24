#include<stdio.h>
void reversesum ( );
int reverse( int );
int main()
{
    int numberofcases;
    scanf("%d", &numberofcases);
    while( numberofcases > 0 )
    {
        reversesum();
        numberofcases--;
    }
    return 0;
}
void reversesum (  )
{
    int reversed = 0, reverse1 = 0, reverse2 = 0, sum, number1, number2;
    scanf("%d", &number1);
    scanf("%d", &number2);
    reverse1 = reverse( number1 );
    reverse2 = reverse( number2 );
    reversed = reverse1 + reverse2;
    sum = reverse( reversed );
    printf("%d\n", sum);
}
int reverse ( int number )
{
    int reverse = 0;
    while ( number > 0 )
    {
        reverse = reverse*10 + number%10;
        number = number/10;
    }
    return reverse;
    
}


