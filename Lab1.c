#include<stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter a number you want to check whether it is prime or not: \n");
    scanf("%d", &number);
    if(number==0||number==1)
    {
        printf("%d is not a prime number ",number);
    }
    else
    {
        for(int m=1;m<=number;m++)
        {
            if(number%m==0)
            {
                sum++;
            }
        }
        if(sum>2)
        {
            printf("%d is not a prime number ",number);
        }
        else
        {
            printf("%d is a prime number",number);
        }
    }
    return 0;
}