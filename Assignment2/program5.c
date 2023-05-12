// accept one number from user and check wheather number is even or odd

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

     if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }

    else
    {
        printf("%d is Odd number\n",iValue);
    }


    return 0;
}