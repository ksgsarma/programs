#include<stdio.h>
#include<string.h>
int main()
{
    int index1, index2, index, carry = 0;
    char number1[500], number2[500], sum[500];
    printf("Enter the number1: ");
    scanf("%s", number1);
    index1 = strlen(number1) - 1;
    printf("Enter the number2: ");
    scanf("%s", number2);
    index2 = strlen(number2) - 1;
    if( index1 >= index2 )
    {
        index = index1;
    }
    else
    {
        index = index2;
    }
    while( index1 >=0 && index2 >=0)
    {
        sum[index] = carry + number1[index1] + number2[index2] -48;
        carry = ((sum[index]-48)/10);
        sum[index] = (sum[index]-48)%10 + 48;
        index --;
        index1 --;
        index2 --;
    }
    if(index2 == -1)
    {
        while(index1 >=0 )
        {
            sum[index] = carry + number1[index1];
            carry = ((sum[index]-48)/10);
            sum[index] = (sum[index]-48)%10 + 48;
            index --;
            index1 --;
        }
    }
    if(index1 == -1)
    {
        while(index2 >= 0)
        {
            sum[index] = carry + number2[index2];
            carry = ((sum[index]-48)/10);
            sum[index] = (sum[index]-48)%10 + 48;
            index --;
            index2 --;
        }
    }
    if(carry == 1)
    {
        printf("The sum is 1%s.\n", sum);
    }
    else
    {
        printf("The sum is %s.\n", sum);
    }
    return 0;
}


