#include<stdio.h>
int main()

{
     int a[10],n,add=0;

     printf("\nEnter the elements of an Array :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        add=add+a[i];
    }

    if (add==15)
    {
        printf("\nThe Addition of an Array elements is Exactly 15.");
    }
    else
    {
        printf("\nThe Addition of an Array elements is not Exactly 15.");
    }
    
    
    
}