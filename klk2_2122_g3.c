#include <stdio.h>
#include <math.h>

double rek(int bro, int ime, int kor_ime, int kop, int cnt){
    int granica = kop/2;
    if(cnt==kop) return sqrt(1.0*bro/ime);
    if(bro>granica/2) return sqrt((1.0*bro/ime)+rek(bro-1,ime+kor_ime, kor_ime+2,kop,cnt+1));
    else sqrt((1.0*bro/ime)+rek(bro+1,ime+kor_ime, kor_ime+2,kop, cnt+1));
    
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%lf", rek(a,1,3,a,1));
    return 0;    
}
