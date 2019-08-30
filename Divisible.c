#include<stdio.h>

int main()
{
    int n;

    printf("\nEnter any Number :");
    scanf("%d",&n);
    

    if (n%5==0)
    {
        printf("\n The number is divisible by 5.");
    }
    if (n%11==0)
    {
        printf("\n The number is divisible by 11.");
    }
    else
    {
        printf("\n The number is not divisible by 5 & 11.");
    }
    
    
    return 0;
    
}