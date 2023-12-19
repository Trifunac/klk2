#include <stdio.h>
#include <math.h>

double rek(int a, int b, int a1, int n, int ite){
    if(ite==n) return sqrt(1.0*a1/b);
    if(ite%2!=0) return sqrt((1.0*a/b)+rek(a-1, b-2, a1, n, ite+1));
    else return sqrt((1.0*a1/b)+rek(a,b-2,a1+1,n,ite+1));
}

int main(){
    int a;
    scanf("%d", &a);
    int b = a*2;
    printf("%lf", rek(a,b,1,a,1));
    return 0;
}