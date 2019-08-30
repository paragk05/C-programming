#include<stdio.h>

//0 1 1 2 3 5 8 13 21

int main()

{
    int a=0,b=1,temp,n;

    printf("Enter Upper limit :");
    scanf("%d",&n);

    for (int i = 1; a <=n; i++)
    {
        printf("%d ",a);
        temp=a+b;
        a=b;
        b=temp;
        

    }
    
    
}