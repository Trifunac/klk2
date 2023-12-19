#include <stdio.h>

double rek(int brojilac, int sabirak_n, int sabirak_p, int ite, int a){
    if(ite==a) return sabirak_n+brojilac/sabirak_p;
    if(ite%2!=0) return sabirak_n+brojilac/rek(brojilac-2, sabirak_n-1, sabirak_p, ite+1,a);
    else return sabirak_p+brojilac/rek(brojilac-2, sabirak_n, sabirak_p+1, ite+1, a);
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%lf", rek(a*2,a,1,1,a));
    return 0;
}