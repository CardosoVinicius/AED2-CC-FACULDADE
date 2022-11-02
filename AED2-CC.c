#define TAMANHO 10
#include <stdio.h>
 
 float MEDIA( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}

struct Aluno {
    int matricula;
    float n1, n2, media;
};

int main()
{
    struct Aluno vec[TAMANHO];
    float soma = 0.0f;
    for(int i = 0; i< TAMANHO; i++){
        printf("\n------");
        printf("\nMatricula: ");
        scanf("%d", &vec[i].matricula);
        printf("Nota n1: ");
        scanf("%f", &vec[i].n1);
        printf("Nota n2: ");
        scanf("%f", &vec[i].n2);
        vec[i].media = MEDIA(vec[i].n1, vec[i].n2);
        soma = soma + vec[i].media;
    }
        for(int i=0; i<TAMANHO; i++){
            printf("\n -------Aluno %d--------", vec[i].matricula);
            printf ("\nNota da n1:%.2f", vec [i].n1);
            printf ("\nNota da n2:%.2f", vec [i].n2);
            printf("\n Media: %.2f %s", vec[i].media,(vec[i].media>=soma /TAMANHO) ? "(ACIMA DA MEDIA)" : "ABAIXO DA MEDIA)");

        }
        printf ("\nRelatorio Geral: ");
        printf ("\n Alunos : %d", TAMANHO);
        printf ("\n Media geral: %.2f", soma/TAMANHO);

    return 0;
}
