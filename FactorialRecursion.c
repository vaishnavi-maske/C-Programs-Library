#include <stdio.h>
long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
int main() {
    int num = 5;
    printf("Factorial of %d = %ld\n", num, factorial(num));
    return 0;
}
