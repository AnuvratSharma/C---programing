//WAP a program to print sum of all even numbers
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter  the number ");
    scanf("%d",&n);
    for( int i = 2; i <= n; i=i+2)
    {
        sum=sum+i;
    }
    printf("%d ",sum);
    return 0;
}