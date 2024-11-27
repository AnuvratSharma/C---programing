#include<stdio.h>
int main(){
  int a,b,c,d,e,sum;
    printf("Enter marks of five subject: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("total marks = %d \n percentage = %.2f",sum,sum*0.2);
    return 0;
}
