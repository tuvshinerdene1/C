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
    printf("Test1 : 1,2,3 : ");printf("%d\n", max_integers(3, 1,2,3));
    printf("Test2 : 2,3,1 : ");printf("%d\n", max_integers(3,2,3,1));
    printf("Test3 : 3,1,2 : ");printf("%d\n", max_integers(3,3,1,2));

    return 0;
}