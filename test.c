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

int genererNombreAleatoire(int maximum) {
    return rand() % (maximum + 1);
}

int main(){
    srand(time(0));
    int a = genererNombreAleatoire(1000);
    int b = genererNombreAleatoire(1000);
    printf("a = %d, b = %d\n", a, b);
    printf("Le minimum est : %d\n", minimum(a, b));
    return 0;
}