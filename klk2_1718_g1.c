#include <stdio.h>
#include <math.h>

double rek(int bro_p,int bro_n, int ime, int ite){
    if(ime==2 && ite%2==0) return sqrt(1.0*bro_p/ime);
    else return sqrt(1.0*bro_n/2);

    if(ite%2==0) return sqrt((1.0*bro_p/ime)+rek(bro_p+1,bro_n-1,ime-2,ite+1));
    else return sqrt((1.0*bro_n/ime)+rek(bro_p+1,bro_n-1,ime-2,ite+1)); 
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%lf", rek(1,a,a+a,1));
    return 0;
}