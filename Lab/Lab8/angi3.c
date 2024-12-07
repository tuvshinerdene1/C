#include<stdio.h>
#include<math.h>

typedef struct Triangle{
    int a,b,c;
}triangle;

double find_area(triangle g){
    double p = (g.a + g.b + g.c)/2;
    double s = sqrt(p*(p-g.a)*(p-g.b)*(p-g.c));
    return s;
}
int main(){
    triangle t1, t2;

    printf("Enter sides of the first triangle:");
    scanf("%d %d %d", &t1.a, &t1.b, &t1.c);

    printf("Enter sides of the second triangle:");
    scanf("%d %d %d", &t2.a, &t2.b, &t2.c);

    if(find_area(t1)>find_area(t2)){
        printf("The first one is bigger.");
    }
    else if (find_area(t1)<find_area(t2)){
        printf("The second one is bigger.");
    }
    else{printf("They have equal areas");}

    return 0;
}