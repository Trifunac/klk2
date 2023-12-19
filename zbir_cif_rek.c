#include <stdio.h>

int zbir_cif_rek(int a){
    if(a==0) return 0;
    return a%10+zbir_cif_rek(a/10);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", zbir_cif_rek(n));
    return 0;
}