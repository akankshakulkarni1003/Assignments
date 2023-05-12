// question = Accept one number from user and display Multiplication of  factors

#include<stdio.h>

int MultFactors(int iNo)
{
    int iCnt = 0;           // loop sathi varaiable tyar kela
    int iMult = 1;           //Multiplicaton lakshat thevnya sathi

    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)              
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;        // function iMult return krnar
}

int main()
{
    int iValue = 0;

    int iRet = 0;                  // iMult je denar tya sathi pishvi

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultFactors(iValue);                  //function call 

    iRet = MultFactors(iValue);

    printf("Multiplication of factors is : %d\n",iRet);


    return 0;
}