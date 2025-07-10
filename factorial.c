#include <stdio.h>

int fact(int a) {
    if (a == 0 || a == 1)
        return 1;

    return a * fact(a - 1);
}

int main() {
    int result = fact(5);
    printf("Factorial: %d\n", result);  
    return 0;
}
