//accept one number and check wheather is divisible by 5 or not
#include<stdio.h>
#include<stdbool.h>

typedef int Bool;

#define TRUE1
#define FALSE2

int BoolCheck(int iNo)
{

    if((iNo % 5) == 0)
    {
        return TRUE1;
    }
    else
    {
        return FALSE2;
    }
}

int main()
{
    int iValue = 0;
    int BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    {
        if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }

    else
    {
        printf("Not is divisible by 5");
    }
 
  return 0;
}
}