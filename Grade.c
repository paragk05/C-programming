#include<stdio.h>

int main()
{
    int ph,ch,bi,ma,co;
    int avg;

    printf("\nEnter the Marks of subject Physics: ");
    scanf("%d",&ph);

    printf("\nEnter the Marks of subject Chemistry: ");
    scanf("%d",&ch);

    printf("\nEnter the Marks of subject Biology: ");
    scanf("%d",&bi);

    printf("\nEnter the Marks of subject Math: ");
    scanf("%d",&ma);

    printf("\nEnter the Marks of subject Computer: ");
    scanf("%d",&co);

    avg=(ph+ch+ma+co+bi)/5.0;

    if (avg>=90 && avg<=100)
    {
        printf("\nYour Grade : A");
    }
    if (avg>=80 && avg<=89)
    {
        printf("\nYour Grade : B");
    }
    if (avg>=70 && avg<=79)
    {
        printf("\nYour Grade : C");
    }
    if (avg>=60 && avg<=69)
    {
        printf("\nYour Grade : D");
    }
    if (avg>=40 && avg<=59)
    {
        printf("\nYour Grade : E");
    }
    if (avg<40)
    {
        printf("\nYour Grade :F");
    }

    
return 0;

}