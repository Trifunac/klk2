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

int main(){
    int a;
    scanf("%d", &a);
    printf("%d", prost(a));
    return 0;
}