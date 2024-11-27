#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value ofb");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the values are = %d %d",a,b);
    return 0;
}
