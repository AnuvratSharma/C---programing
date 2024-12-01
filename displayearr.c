#include<stdio.h>
int main(){
    
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter  Array's Elements: ");
    for(int i = 0;i<n;i++)
    {
scanf("%d",&marks[i]);
    }
    printf("Array=");
    for(int i = 0;i<n;i++)
        {
            printf("%d ",marks[i]);
        }
    return 0;
}
