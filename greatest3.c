// WAP to find greatest number among Three using ternary operators
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && b>c)?printf("a is greatest"):(b>c)?printf("b is greatest"):printf("c is greatest");
    return 0;
}
