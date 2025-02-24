#include <stdio.h>
int is_palindrome(int);

int main(){
    int number;
    printf("Number = ");scanf("%d",&number);
    printf("%d", is_palindrome(number));
    return 0;


}

int is_palindrome(int num){
    int number = num;
    int sum = 0;
    while(number > 0){
        sum *= 10;
        sum += number%10;
        number /= 10;
    }
    if(num == sum){
        return 1;
    }
    return 0;
}