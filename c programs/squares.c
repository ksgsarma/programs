#include <stdio.h>
int main()
{
    int count,counter,result;
    printf("Enter the number of terms in the series to be printed:");
    scanf("%d",&count);
    if (count<1)
    {
        printf("Enter natural numbers.");
    }
    else if(count==1)
    {
        printf("The 1 number in the series is 1.");
    }
    else
    {
        printf("The %d terms in the series are 1",count);
        for (counter=2; counter<count;counter++)
        {
            result=counter*counter;
            printf(", %d",result);
        }
        result=count*count;
        printf(" and %d.",result);
        
    }
    printf("\n");
    return 0;
}
