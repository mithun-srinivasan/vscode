#include<stdio.h>
void main(){
    increment();
    increment();
    increment();
}
increment(){
    static int count=0;
    count++;
    printf("Count is %d\n",count);
}