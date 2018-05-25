#include<stdio.h>
void printinbinary ( int );
int prime ( int );
int even ( int );
int digits ( int );
int main()
{
    int properties = 0;
    int number;
    int counter = 2;
    printf("Enter the number: ");
    scanf("%d", &number);
    printinbinary(properties);
    if ( even (number) )
    {
        properties = properties | 0X80;
    }
    printinbinary(properties);
    
    if ( prime (number) )
    {
        properties = properties | 0X40;
    }
    printinbinary(properties);

    if ( digits (number) )
    {
        properties = properties | 0X20;
    }
    printf("After bitsetting\n");
    printinbinary(properties);
    return 0;
}

void printinbinary( int x)
{
    int count = 0, index = 0, constant, binary [32] ;
    while(index < 32)
    {
        binary [index] = count ;
        index++ ;
    }
    index = 0;
    while( x >=1  )
    {
        count = x%2 ;
        x = x/2 ;
        binary [index] = count ;
        index++ ;
    }
    index = 32;
    for( constant = index - 1; constant >= 0; constant-- )
        printf("%d", binary [constant] ) ;
    printf("\n") ;
}

int prime ( int y )
{
    int counter = 2;
    if ( y == 1 )
    {
        return 0;
    }
    if ( y < 4 )
    {
        return 1;
    }
    while ( counter*counter <= y)
    {
        if ( y % counter == 0 )
        {
            break;
        }
        counter ++;
    }
    if ( y % counter == 0 )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int even ( int z )
{
    if( z%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int digits ( int a )
{
    if( a/10 == 0 )
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
