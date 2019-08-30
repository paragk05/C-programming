#include<stdio.h>

int main()

{
    int a[10],b[10],n,counte=0;

    printf("\nHow many elements do you want to enter in Array :");
    scanf("%d",&n);


    printf("\nEnter the elements of an Array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            b[counte]=a[i];
            counte++;
        }
        
        
       
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==1)
        {
            b[counte]=a[i];
            counte++;
        }
        
        
       
    }

    for (int i =0; i < n; i++)
    {
        printf("%d ",b[i]);      
        
       
    }
    
}