#include <stdio.h>
#include <math.h>

double rek(int a, int b){
    if(a==1) return sqrt(1.0*b/a);
    if(sqrt(b)==1) return sqrt((1.0*b/a)+rek(a-1,b+1));
    else return sqrt((1.0*b/a)+rek(a-1,b-1));
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%lf", rek(a,1));
    return 0;
}