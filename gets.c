#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter your name: ");
    gets(str);
    printf("Hello, %s!",str);
    return 0;
}