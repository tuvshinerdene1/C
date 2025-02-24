#include<stdio.h>
#include<math.h>

typedef struct Point {
    int x, y;
}point;

double distance(point a, point b);


int main(){
    point p1, p2;

    printf("Enter coordinates of the first point\n");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter coordinates of the second point\n");
    scanf("%d %d", &p2.x, &p2.y);

    printf("Distance between these points is %.2f\n", distance(p1, p2));

    return 0;
}

double distance(point a, point b){
    double dist = sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
    return dist;
}
