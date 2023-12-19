#include <math.h>
#include <stdio.h>

double rek(int a, int br, int cnt){
    if(cnt==a) return sqrt(1.0*cnt*br);
    if(br==0) br+=3;
    return sqrt((cnt*br)+rek(a,br-1, cnt+1)); 

}

int main(){
    int a;
    scanf("%d", &a);
    printf("%lf", rek(a,3,1));
    return 0;
}