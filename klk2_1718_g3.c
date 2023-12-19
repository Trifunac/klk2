#include <stdio.h>
#include <math.h>

double rek(int a,int b, int korak_i, int korak_b){
    if(b<korak_b) return sqrt(1.0*b/a);
    return sqrt(1.0*b/a+rek(a+korak_i,b-korak_b, korak_i+1, korak_b));
}

int main(){
    int a, b;
    scanf("%d", &a);
    b=a*11-1;
    printf("%lf", rek(a,b,1,11));
    return 0;
}