#include<stdio.h>
int sum=0;
// Recursion Function
void addition(int s)
    {sum = sum+s;}

int main()
{   int a=1;
    while (a==1)
    {   int i;
        printf("Enter the number to be added (enter 0 when over):");
        scanf("%d",&i);
        if (i!=0)
            {addition(i);}
        else
            {a=0;}
    }
    printf("Sum of Digits is: %d",sum);
    return 0;
}
