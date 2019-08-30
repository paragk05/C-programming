#include<stdio.h>

int main()
{
    int n;

    printf("\nEnter any number :");
    scanf("%d",&n);

    printf("\nMultiplication is as follows..\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",n*i);

    }
}