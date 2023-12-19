#include <stdio.h>

double rek(int a, int b){
    if(b==a) return a;
    return b+1/rek(a,b+1);

}

int main(){
    int a;
    scanf("%d", &a);
    printf("%lf", rek(a,1));
    return 0;
}