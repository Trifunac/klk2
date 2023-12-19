#include <stdio.h>
#include <math.h>

double rek(int a, int b, int korak_b,int kop, int ite, float gr){
    
    if(ite==kop) return sqrt(1.0*a/b);
    if(ite<gr)  return sqrt((1.0*a/b)+rek(a-1,b+korak_b, korak_b+2,kop, ite+1,gr));
    if(ite>=gr) return sqrt((1.0*a/b)+rek(a+1,b+korak_b, korak_b+2,kop, ite+1,gr));
}

int main(){
    int a;
    scanf("%d", &a);
    float g = 1.0*a/2;
    printf("%lf", rek(a,1,3,a,1, g));
    return 0;
}