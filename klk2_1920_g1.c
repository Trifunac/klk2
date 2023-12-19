#include <stdio.h>
#include <math.h>

double rek(int a, int b, int cnt ,int korak_b_n, int korak_b_p, int kop, int br, int ime){
    if(cnt==kop){
        if(kop%2!=0) return sqrt(1.0*br/b);
        else return sqrt(1.0*a/ime);
    }
    if(cnt%2!=0) return sqrt((1.0*br/b)+rek(a,b-korak_b_n,cnt+1,korak_b_n-2,korak_b_p, kop,br+1, ime));
    else return sqrt((1.0*a/ime)+rek(a-1, b,cnt+1, korak_b_n, korak_b_p+2, kop, br, ime+korak_b_p));
}

int main(){
    int a;
    scanf("%d", &a);
    int b = a*a;
    int k_b_n = a*2-1;
    int k_b_p = 3;
    printf("%lf", rek(a,b,1, k_b_n,k_b_p,a,1,1));
    return 0;
}