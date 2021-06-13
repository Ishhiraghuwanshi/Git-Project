#include<stdio.h>

int main(){
    int number,a,i=0;
    int arr[10];
    int  digit =0;
    printf("Enter the value of number \n");
    scanf("%d",&number);
    while(number > 0){
        number = number/10;
        digit++;
    }
    
    printf("The total number of digits in the number is %d\n", digit);
    while(number!=0)
    {
       a = number % 10;
       arr[i]= a;
       i++;
       number = number /10;

    }
    for(int j=i-1;j>-1;j--){
        printf("array elements : %d\n",arr[j]);
    }



    return 0;
}