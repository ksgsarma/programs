#include <stdio.h>
int main()
{
    int count,counter,number,result;
    printf("Enter the number upto which the series is to be printed: ");
    scanf("%d",&count);
    if (count<1)
    {
        printf("Enter natural numbers.");
    }
    else if (count<4)
    {
        printf("The series upto %d is 1.",count);
    }
    else
    {
        printf("The series upto %d are 1",count);
        counter = 2;
        result=1;
        while (result<=count)
        {
        result=counter*counter;
        for (number=1; number<counter-1; number++)
        {
            result=result*counter;
        }
            if(result<=count)
            {
                printf(",%d",result);
            }
            counter=counter+1;
        }
        printf(".");
    }
    printf("\n");
    return 0;
}
