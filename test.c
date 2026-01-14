#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int minimum(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main(){
    srand(time(0));
    int a = rand() % 1001;
    int b = rand() % 1001;
    printf("a = %d, b = %d\n", a, b);
    printf("Le minimum est : %d\n", minimum(a, b));
    return 0;
}