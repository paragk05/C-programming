#include<stdio.h>

int main()
{

    int a[10],n,counte=0;

    printf("\nHow many elements do you want to enter in Array :");
    scanf("%d",&n);


    printf("\nEnter the elements of an Array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }


    int c7=0,c5=0;
    
    
    for (int i = 0; i < n; i++)
    {
        
        if (a[i]==7 ||a[i]==5)
        {
            if (a[i]==7)
            {
            c7++;
            }
        
            if (a[i]==5)
            {
            c5++;
            }


            if(c7>=1&&c5>=1)
            {
            printf("\nThe Array contain both 7 and 5");
            break;
            }
            
        }
        
        
        
    }
    if (c7<1||c5<1)
    {
        printf("\nThe Array doesn't contain both 7 and 5");
    }
    
    
}