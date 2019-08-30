#include<stdio.h>

int main()
{
    int n;

    printf("Enter any number :");
    scanf("%d",&n);

    int temp=n;
    int p=0,k=0;

    while (n>0)
    {
        p=n%10;
        k=k+(p*p*p);
        n=n/10;

    }
    if(k==temp)
    {
        printf("The number is Armstrong.");
    }
    else
    {
        printf("The number is not Armstrong.");
    }
    
}