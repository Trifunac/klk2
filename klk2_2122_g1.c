#include <stdio.h>
#include <math.h>

double rek(int bro, int ime, int kop, int ite){
    if(bro==kop) return sqrt(1.0*bro/ime*ime);
    if(ite%2!=0) return sqrt(1.0*bro/ime+bro*rek(bro+1,ime+1,kop, ite+1));
    else return sqrt(1.0*bro/ime*ime+rek(bro+1,ime+1,kop, ite+1));
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf", rek(1,2,1,n));
    return 0;
}