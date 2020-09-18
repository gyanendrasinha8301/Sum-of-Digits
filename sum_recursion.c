#include<stdio.h>
int add(int i);

// Recursion Function
int add (int n)
{   int s;
    if (n != 0)
        { s = (n%10 + add(n/10));}
    else
    { s=0;}
    return s;
}
int main()
{   int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int sum;
    sum = add(n);
    printf("The sum of Digits of the Number is: %d", sum);
    return 0;
}
