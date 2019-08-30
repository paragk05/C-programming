#include<stdio.h>

int main()
{
    int n;

    printf("Enter any Number :");
    scanf("%d",&n);


    int temp=n;
    int num;


    while(n>0)
    {
        num=n%10;
        printf("%d",num);
        n/=10;        
    }
    
}