#include <stdio.h>
void printAscending(int a) {
    if (a == 0)
        return;
    
    printAscending(a - 1);    
    printf("%d ", a);         
}

int main() {
    int a1 = 5;
    printAscending(a1);      
    return 0;
}
