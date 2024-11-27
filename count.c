#include<stdio.h>

int main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp = num;
    while(tem!=0)
    {
    temp/=10;
    count++;
    }
    printf("Number of digits in the number %d is %d",num,count);
    return 0;
}
