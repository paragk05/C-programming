#include<stdio.h>

int main()
{
    int year;

    printf("\nEnter year :");
    scanf("%d",&year);

    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                printf("\n %d is a leap year.",year);
                exit(0);                
            }
            else
            {
                printf("\n %d is not a leap year.",year);
                exit(0);
                
            }


            printf("\n %d is a leap year.",year);
            exit(0);
            
        }
        printf("\n %d is a leap year.",year);
        exit(0);
        
    }
    else
    {
        printf("\n%d is not leap year",year);
    }
    
    

    return 0;
}