#include<stdio.h>

int main(){
    int a ,b ,temp=0;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("the value of a and b before swapping is a = %d , b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("the value of a and b after  swapping is a = %d , b = %d\n",a,b);
    return 0;
}