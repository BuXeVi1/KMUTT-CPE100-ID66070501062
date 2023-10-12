#include <stdio.h>

long int factorial(int n){
    int i;
    long int product = 1;
    for (i = n; i > 1; i--)
        product *= i;
    return product;
}

long int combination(int n, int r){
    long int numerator = factorial(n);
    long int denominator = factorial(r) * factorial(n - r);
    long int result = numerator / denominator;
    return result;
}

int main(){
    int n, r;
    long int ans;
    printf("To calculate nCr, enter n and r: ");
    scanf("%d%d", &n, &r);
    ans = combination(n, r);
    printf("\n %dC%d = %ld", n, r, ans);
    return 0;
}