#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int result;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    result = strcmp(str1, str2);
    if(result==0)
        printf("Strings are equal.\n");
    else if(result<0)
        printf("%s string is less than %s string.\n",str1,str2);
    else
        printf("%s string is greater than %s string.\n",str1,str2);
}