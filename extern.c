#include<stdio.h>
void main(){
   int a=3;
   extern int b;
printf("%d\n",a);
printf("%d\n",b);
}
int b=10;