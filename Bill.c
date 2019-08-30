#include<stdio.h>

int main()
{
    int b;
    float amount;

    printf("Enter units of your Electric Bill :");
    scanf("%d",&b);

    if(b>0)
    {
        if (b>=1 && b<=50)
        {
            amount=b*0.50;
        }

        if (b>=51 && b<=150)
        {
            amount=b*0.75;
        }
        
        if (b>=151 && b<=250)
        {
            amount=b*1.20;
        }
        
        if (b>=250)
        {
            amount=b*1.50;
        }

        

        float percent=((20.0*amount)/100);

        float total=amount+ percent;     

        printf("\nThe Unit charge is :%f",amount);
        printf("\nThe Additional 20 percent charge is :%f",percent);
        printf("\nThe Total Amount is as follows..\n");
        printf("\t %f \n+\t %f\n--------------------------\n\t%f",amount,percent,total);
        


    }
    else
    {
        printf("\nInvalid input.");
    }
    

    return 0;


}