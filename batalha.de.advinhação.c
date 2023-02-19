/////////// Vinicius Cardoso De Souza //////////
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    
  // imprimindo cabecalho bonito do jogo
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo a     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Batalha de Adivinhacao! \n");
    printf("    |\" \"  |  |_|  |\"  \" |           1x1          \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");



    int segundos = time(0);
    srand(segundos);
    
    int numerosecreto1 = rand() % 100;
    int numerosecreto2 = rand() % 100;

    int chute1;
    
    int chute2;
    
    int tentativas1 = 1;
    int tentativas2 = 1;
   
    double pontos1 = 1000;
    
    double pontos2 = 1000;
    
    int acertou1 = 0;
    
    int acertou2 = 0;
    
    int maior1 = 0;
    int maior2 = 0;
    
    
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
      
      


   //FOR - player 1
    for(int i =  1; i <= numerodetentativas; i++){
    
    
    printf("\n\nTentativa %d", tentativas1);
    
    printf("\nPlayer 1, qual é o seu chute? ");
        scanf("%d", &chute1);
        
        acertou1 = (chute1 == numerosecreto1);

    
    if (acertou1) {
        printf("\n\n Você acertou, agora vamos para o player 2");
        break;
    }
    
        
        maior1 = chute1 > numerosecreto1;
    
    if (maior1) {
          printf("\n Você errou! Chute um número menor!");
      }
      
      else {
          printf("\n Você errou! Chute um número maior!");
       }
    
    if (chute1 < 0){
        printf("\nVoce nao pode chutar numeros negativos!");
        continue;
         
    }
    
    tentativas1++;
       
       double pontosperdidos1 = abs(chute1 - numerosecreto1) / 2.0;
       pontos1 = pontos1 - pontosperdidos1;
    }
    
    
    
    
    printf("\n\n------------------------------------------------------");
    
    //FOR - player 2
    for(int j =  1; j <= numerodetentativas; j++){
    
    
    printf("\n\nTentativa %d", tentativas2);
    
    printf("\nPlayer 2, qual é o seu chute? ");
        scanf("%d", &chute2);
    
    acertou2 = (chute2 == numerosecreto2);

 
    if (acertou2) {
        break;
    }
        maior2 = chute2 > numerosecreto2;
    
     if (chute2 < 0){
        printf("\nVoce nao pode chutar numeros negativos!");
        continue;
    }
    
      
      else if (maior2) {
          printf(" Você errou! Chute um número menor!");
      }
      
      
      else {
          printf(" Você errou! Chute um número maior!");
       }
       
       tentativas2++;
      
     
      double pontosperdidos2 = abs(chute2 - numerosecreto2) / 2.0;
      pontos2 = pontos2 - pontosperdidos2;  
    
    }

       printf ("\nFim de Jogo");
       printf ("\nO numero secreto do Player 1 é %d", numerosecreto1);
       printf ("\nO numero secreto do Player 2 é %d", numerosecreto2);
       
  
      if(acertou1 && pontos1 > pontos2) {
          printf("\n\n Player 1 você ganhou! ");
          printf("\n  _____ ");
          printf("\n |^   ^|   ");
          printf("\n |O   O|   ");
          printf("\n |  ~ *!   ");
          printf("\n    O     ");
          printf("\n   | |);   ");
               printf("\nPontuação: ");
               printf("\nPlayer 1: %.2f", pontos1);
               printf("\nPlayer 2: %.2f", pontos2);
               
      }
      else if(acertou2 && pontos2 > pontos1) {
          printf("\n\n Player 2 você ganhou! ");
          printf("\n  _____ ");
          printf("\n |^   ^|   ");
          printf("\n |O   O|   ");
          printf("\n |  ~ *!   ");
          printf("\n    O     ");
          printf("\n   | |);   ");
               printf("\nPontuação: ");
               printf("\nPlayer 2: %.2f", pontos2);
               printf("\nPlayer 1: %.2f", pontos1);
      
               
      }
       
               else {
                   printf("\nParabéns vocês dois são horríveis e conseguiram fazer a proeza de perder esse game\n GOOD GAME");
               }
    }
    
    
    
