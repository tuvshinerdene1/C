#include<stdio.h>
#include<math.h>

typedef struct Triangle{
    int a, b, c;
} triangle;

int main(){
    triangle tr1, tr2;

    printf("Enter sides of the first triangle\n");
    scanf("%d %d %d",&tr1.a, &tr1.b, &tr1.c);

    printf("Enter sides of the second triangle\n");
    scanf("%d %d %d",&tr2.a, &tr2.b, &tr2.c);

    double p1 = (tr1.a+ tr1.b+tr1.c)/2;
    double p2 = (tr2.a+ tr2.b+tr2.c)/2;

    double s1 = (sqrt(p1*(p1-tr1.a)*(p1-tr1.b)*(p1-tr1.c)));
    double s2 = (sqrt(p2*(p2-tr2.a)*(p2-tr2.b)*(p2-tr2.c)));

    if(s1> s2){
        printf("The first one is bigger\n");
    }else if(s1 < s2){
        printf("The second one is bigger.");}
    else{
        printf("They have equal areas\n");
    }

    return 0;

    

}