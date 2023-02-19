/////////// Vinicius Cardoso De Souza //////////
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    
  // imprimindo cabecalho bonito do jogo
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");



    int segundos = time(0);
    srand(segundos);
    
    int numerosecreto = rand() % 100;

    int chute;
    
    int tentativas = 1;
   
    double pontos = 1000;
    
    int acertou = 0;
    
    int nivel;

    int numerodetentativas = 5;
    
    int x;
    
    // escolhendo o nivel de dificuldade
    printf("Qual o nivel de dificuldade?\n");
    printf(" (1) Facil - 20 tentativas \n (2) Medio - 15 tentativas \n (3) Dificil - 10 tentativas");
    printf("\n (4) Muito dificil - 5 tentativas");
    printf("\n (5) Jogo personalizado");
    
    
    printf("\n\nEscolha: ");
    scanf("%d", &nivel);
    
    if (nivel == 5) {
            
            printf("\nInsira a quantidade de tentativas desejadas: ");    
            scanf("%d", &x);
        }

    switch(nivel) {
        case 1: 
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        case 3:
            numerodetentativas = 10;
            break;
        case 4:
            numerodetentativas = 5;
            break;
        default:
            numerodetentativas = x; 
            break;
    }

   
    for(int i =  1; i <= numerodetentativas; i++){
    
    
    printf("\n\nTentativa %d", tentativas);
    
    printf("\nQual é o seu chute? ");
        scanf("%d", &chute);
        
    printf("Seu chute foi %d", chute);
 
    
    if (chute < 0){
        printf("\nVoce nao pode chutar numeros negativos!");
        continue;
    }
    
    acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
    
    
    if (acertou) {
        break;
    }

      else if (maior) {
          printf(" e seu chute é maior que o número secreto");
      }
      
      
      else {
          printf(" e foi menor que o número secreto");
       }
       
       tentativas ++;
       
       double pontosperdidos = abs(chute - numerosecreto) / 2.0;
       pontos = pontos - pontosperdidos;
       
    }
       printf ("\nFim de Jogo");
       printf ("\nO numero secreto é %d", numerosecreto);
       
      if(acertou) {
          printf("\n\nVocê ganhou! ");
          printf("\n  _____ ");
          printf("\n |^   ^|   ");
          printf("\n |O   O|   ");
          printf("\n |  ~ *!   ");
          printf("\n    O     ");
          printf("\n   | |);   ");
               printf("\nTotal de pontos: %.2f", pontos);
               
      }
      else {
            
    printf("\n   Você perdeu!       ");
    printf("\n     _______       ");
    printf("\n    |.-----.|      ");
    printf("\n    ||x . x||      ");
    printf("\n    ||_.-._||      ");
    printf("\n    `--)-(--`      ");
    printf("\n   __[=== o]___    ");
    printf("\n  |:::::::::::|\   ");
    printf("\n  `-=========-`    ");
            

 
    }
    
}
