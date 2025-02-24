#include<stdio.h>
#include<math.h>

struct Rational {
    int d, n; // d/n fraction
};

typedef struct Rational Rational;
Rational add(Rational a, Rational b);
Rational sub(Rational a, Rational b);
Rational mul(Rational a, Rational b);
Rational div(Rational a, Rational b);
Rational simplify(Rational a);
void print(Rational a);
int gcd(int a, int b);

int main(){
    Rational a, b;

    printf("Enter the first fraction(d/n): ");
    scanf("%d %d", &a.d, &a.n);

    printf("Enter the second fraction(d/n): ");
    scanf("%d %d", &b.d, &b.n);

    printf("add\n");
    print(add(a, b));printf("\n");
    printf("sub\n");
    print(sub(a, b));printf("\n");
    printf("mul\n");
    print(mul(a, b));printf("\n");
    printf("div\n");
    print(div(a, b));printf("\n");


    return 0;
}

int gcd(int a, int b){
    int result = 1;
    int min;
    if(a < b){
        min = a;
    }
    else{min = b;}

    for(int i = 2 ; i <= min ; i++){
        if(a%i == 0 && b%i == 0){
            result = i;
        }
    }
    return result;
}

Rational simplify(Rational a){
    Rational result;
    result.d = a.d/(gcd(a.d,a.n));
    result.n = a.n/(gcd(a.n,a.d));

    return result;
}

Rational add(Rational a, Rational b){
    Rational result;

    int dividor = gcd(a.n, b.n);
    result.n = a.n/dividor*b.n;
    result.d = a.d*(result.n/a.n) + b.d*(result.n/b.n);

    return simplify(result);
}

Rational sub(Rational a, Rational b){
    Rational result;

    int dividor = gcd(a.n, b.n);
    result.n = a.n/dividor*b.n;
    result.d = a.d*(result.n/a.n) - b.d*(result.n/b.n);

    return simplify(result);
}

Rational mul(Rational a, Rational b){
    Rational result;
    result.d = a.d*b.d;
    result.n = a.n*b.n;

    return simplify(result);
}

Rational div(Rational a, Rational b){
    Rational result;
    result.d = a.d*b.n;
    result.n = a.n*b.d;

    return simplify(result);
}

void print(Rational a){
    printf("%d / %d\n", a.d, a.n);
}
