#include <stdio.h>

int imprime (char var, int x) {
    for (int l = 1; l <= x; l++){
        for(int c=1; c <=x; c++){
        printf("%c", var);
    }
    printf("\n");
}
    return x*x;
}
int main () {
    int qntd;
    qntd = imprime ('/', 10);
    imprime ('!', 5);

    printf("Foram impressos %d primeiro e %d segundo", qntd, imprime ('!', 5));
    return 0;
}
