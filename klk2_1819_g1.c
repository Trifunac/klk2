#include <stdio.h>

int prost(int n) {
    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

double rek(int a, int cnt, int b, int x){
    int br, br2;
    for(int i = 0; i<a; i++){
        if(prost(i))
        br=i, br2=i;
    }
    if(cnt==a) return (1.0*br-br/br);
    if(b%2!=0) return br+br2/rek(a,cnt+1, b,x);
    else return br-br2/rek(a,cnt+1, b, x);
}

int main(){
    int n;
    scanf("%d", &n);
    int b = 2;
    printf("%lf", rek(n,b,1,n));
    return 0;
}