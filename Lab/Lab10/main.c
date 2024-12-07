#include"array.h"

int main(){
    int*array;
    int sz,s;
    printf("uusgeh array-ni hemjee: \n");
    scanf("%d",&sz);
    array=createArray(sz);
    read(array,sz);
    print(array,sz);
    printf(" hamgiin baga ni: %d\n",minA(array, sz));
    printf(" hamgiin ih ni: %d\n",maxA(array, sz));
    printf(" elementuudiin dundaj ni: %f\n",average(array, sz));
    printf("haih utgiig oruul\n");
    scanf("%d",&s);
    printf(" haisan elementiin dugaar: %d\n",searchA(array, sz, s));
    sortA(array, sz);
    printf("erembelesnii daraa\n");
    print(array,sz);
    deleteArray(array);

    return 0;
}
