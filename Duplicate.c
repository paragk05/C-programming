#include<stdio.h>


int main()
{
    
    int a[10];
    int b[10];
    int i,j,n,c=0;

    printf("\nEnter the number of elements do you want to enter :");
    scanf("%d",&n);


    printf("Enter elements of first array :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for ( j = 0; j < c; j++)
        {
            if (a[i]=b[j])
            {
                break;            
                
                
                
            }
        }
            if (j==c)
            {
                
                b[c]=a[i];
                c++;
            }
            
            
        
        
    }

    printf("\nThe Array after removing duplicate :\n");

    for ( i = 0; i < c; i++)
    {
        printf("%d \n",b[i]);
    }
    
}