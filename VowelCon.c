#include<stdio.h>

int main()
{
    char a;

    printf("ENter any alphabet :");
    scanf("%c",&a);

    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("\n%c is vowel",a);
    }
    else
    {
        if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        {
            printf("\n%c is vowel",a);
        }
        else
        {
            printf("\n%c is Consonent.",a);
        }
        
        
    }
    
    

}