#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: \n");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
// This program prints an inverted right-angled triangle pattern of asterisks based on user input for the number of rows.
