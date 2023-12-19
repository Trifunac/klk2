#include <stdio.h>

double rek(int a, int b, int n){
    if(n==a) return (n+b/n);
    if(n%2!=0) return (n+b/rek(a,b-2, n+1));
    else return (n-b/rek(a,b-2,n+1));
}

int main(){
    int n;
    scanf("%d", &n);
    int b = n * 2;
    printf("%lf", rek(n,b,1));
    return 0;
}