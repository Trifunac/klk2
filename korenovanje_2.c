#include <stdio.h>
#include <math.h>

double rek(int a, int b){
    if(b==a) return sqrt(a);
    return sqrt(b+rek(a,b+1));
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%lf", rek(a,1));
    return 0;
}