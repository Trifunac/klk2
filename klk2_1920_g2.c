#include <stdio.h>

long int fak(int n){
    if(n>=1) return n*fak(n-1);
    else return 1;
}
/*
double rek(int sab_p, int sab_n, int ime_p, int ime_n, int cnt, int kop){
    if(cnt==kop){
        if(cnt%2!=0) return (sab_n+fak(ime_n)/sab_p+fak(ime_p));
        else return (sab_p+fak(ime_p)/sab_n+fak(ime_n));
    }
    if(cnt%2!=0) return ((sab_n+fak(ime_p))/rek(sab_p, sab_n+1, ime_p-1, ime_n, cnt+1, kop));
    else return ((sab_p+fak(ime_n))/rek(sab_p-1, sab_n, ime_p, ime_n+1,cnt+1, kop));
}
*/

int main(){
    int a;
    scanf("%d", &a);
    printf("%ld",fak(a));
    return 0;
}