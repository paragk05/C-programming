#include<stdio.h>

int main()
{
    int num1,num3,num2;

    printf("\nEnter the values of A,B and C :");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 > num2)  //A=5 B=2 C=7
    {
        if (num1>num3)
        {
        printf("\n A is max.");        
        }
        else
        {
            printf("\n C is max.");
            
        }
        
        
    }
    else
    {
        if (num2 > num3)
        {
            printf("\n B is max.");
        }
        else
        {
            printf("\n C is max.");
        }
        
        
    }
    
    



    return 0;
}