#include<stdio.h>

#define min(x,y) ((x < y) ? x : y)
int min5(int , int , int , int ,int);

int main(){
    int number1, number2, number3, number4, number5;

    printf("number1 =");scanf("%d", &number1);
    printf("number2 =");scanf("%d", &number2);
    printf("number3 =");scanf("%d", &number3);
    printf("number4 =");scanf("%d", &number4);
    printf("number5 =");scanf("%d", &number5);

    printf("Minimum number of given numbers is %d", min5(number1, number2, number3, number4, number5));
    return 0;
}

int min5(int num1, int num2, int num3, int num4, int num5){
    num1 = min(num1,num2);
    num1 = min(num1,num3);
    num1 = min(num1,num4);
    num1 = min(num1,num5);
    return num1;
}

