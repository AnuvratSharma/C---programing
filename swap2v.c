#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a &b");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the values are = %d %d",a,b);
    return 0;
}
