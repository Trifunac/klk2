#include <stdio.h>

double rek(int n){
    if(n==1) return 1;
    return 1.0*n +1 / rek(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf", rek(n));
    return 0;
}