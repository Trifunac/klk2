#include <stdio.h>
#include <math.h>

double rek(int bro_n, int ime, int bro_p, int ite){
    if(ime==2 && ite%2==0) return sqrt(1.0*bro_p/ime);
    else return sqrt(1.0*bro_n/ime);
    if(ite%2!=0) return sqrt(1.0*bro_n/ime) +rek(bro_n-1, ime-2, bro_p+1,ite+1);
    if(ite%2==0) return sqrt(1.0*bro_p/ime) +rek(bro_n-1, ime-2, bro_n+1,ite+1);
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%lf", rek(a,a*2,1,1));
    return 0;
}