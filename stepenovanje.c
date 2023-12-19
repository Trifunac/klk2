#include <stdio.h>

int rek(int a, int b){
    if(b==0) return 1;
    return a*rek(a,b-1);
}

int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    printf("%d", rek(a,b));
    return 0;
}