#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int n,result=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    result = fact(n);
    printf("Factorial of %d is %d",n,result);
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}