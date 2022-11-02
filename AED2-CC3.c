#include <stdio.h>

int imprimir (char c, int n) {
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < i; j++){
            printf("%c", c);
        }
        printf("\n");
    }
    return ((1+n)*n/2);
}
int main () {
    printf ("Impressos foram %d", imprimir('\', 10));
    return 0;
}
