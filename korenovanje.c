#include <stdio.h>
#include <math.h>

double rek(int n){
    if(n==1) return sqrt(n);
    return sqrt(n+rek(n-1));
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf", rek(n));
    return 0;
}