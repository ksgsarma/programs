#include<stdio.h>
int main()
{
    int count, counter = 1, i;
    printf("enter the number of natural numbers to be printed: ");
    scanf("%d", &count);
    if(count < 1)
    {
        printf("please enter nautral numbers");
    }
    else if (count == 1)
    {
        printf("The 1 natural number is 1.");
    }
    else
    {
        printf("The %d natural numbers are ",count);
        for (i = 1; i < count -1; i++)
        {
            printf(" %d,",counter);
            counter=counter+1;
        }
        printf(" %d and %d .",counter,count);
    }
    printf("\n");
    return 0;
}


