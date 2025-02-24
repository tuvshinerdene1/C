#include <stdio.h>
#include <stdarg.h>

int max_integers(int count, ...){
    va_list args;
    va_start(args, count);
    int max = va_arg(args, int);

    for(int i = 1 ; i < count; i++){
        int num = va_arg(args, int);
        if(num > max){
            max = num;
        }
    }
    va_end(args);
    return max;
}

int main(){
    printf("1,2,3 : ");printf("%d\n", max_integers(3, 1,2,3));
    printf("2,3,1 : ");printf("%d\n", max_integers(3,2,3,1));
    printf("3,1,2 : ");printf("%d\n", max_integers(3,3,1,2));
    printf("3,1,2,4 : ");printf("%d\n", max_integers(4,3,1,2,4));
    printf("5,1,2,10,3,5 : ");printf("%d\n", max_integers(5,1,2,10,3,5));

    return 0;
}