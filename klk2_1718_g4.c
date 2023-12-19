#include <stdio.h>

double rek(int a, int b, int korak_a, int korak_b,int ite){
    if(ite==korak_a) return a+b/(a+korak_a);
    return a+b/rek(a+korak_a, b-korak_b, korak_a+1, korak_b, ite);
}

int main(){
    int a;
    scanf("%d", &a);
    int b = a * 11 - 1;
    printf("%lf", rek(a,b,1,11,a));
    return 0; 
}