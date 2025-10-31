#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// ======================
// Funções Recursivas
// ======================

// Função da torre (anda em linha reta)
void torre(int casas, char direcao[20]) {
    if (casas == 0) {
        return; // Para quando acabar as casas
    }
    printf("%s\n", direcao);
    torre(casas - 1, direcao); // Chama de novo para andar mais
}

// Função do bispo (anda na diagonal)
// A recursão faz o movimento vertical e o for o movimento horizontal
void bispo(int vertical, int horizontal, char dirV[20], char dirH[20]) {
    if (vertical == 0) {
        return; // Quando não tiver mais movimento pra cima ou pra baixo
    }
    for (int i = 1; i <= horizontal; i++) {
        printf("%s, %s\n", dirV, dirH);
    }
    bispo(vertical - 1, horizontal, dirV, dirH); // Move mais uma "linha" na diagonal
}

// Função da rainha (anda em qualquer direção)
void rainha(int casas, char direcao[20]) {
    if (casas == 0) {
        return;
    }
    printf("%s\n", direcao);
    rainha(casas - 1, direcao);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    //===============
    //Codigo Nivel Novato
    //===============

     int peca, sentido, i=1, movimento = 1; 

    printf("---ESCOLHA AS PEÇAS---\n");
    printf("[1]. Torre\n");
    printf("[2]. Bispo\n");  // Opção de escoha com switch
    printf("[3]. Rainha\n");
    printf("digite aqui sua opção >>>");
    scanf("%d", &peca);

    switch (peca)     // Switch com as peças e junto com a estrutura de repetição
    {
    case 1:
        printf("**TORRE**\n");
        printf("Para que lando você quer mover\n"); //Escolhendo o sentido da peça
        printf("[1]. Direita\n");
        printf("[2]. Esquerda\n");
        printf("[3]. Cima\n");
        printf("[4]. Baixo\n");
        printf("Faça seu movimento >>>");
        scanf("%d", &sentido);

        switch (sentido) // Switch para o sentido
        {            // Para os qutros movimentos usando a estrutura for
           case 1:
                for(i; i<=5; i++){
                    printf("Direita\n");
                }
                break;
            case 2:
                for(i; i<=5; i++){
                    printf("Esquerda\n");
                }
                break;
            case 3:
                for(i; i<=5; i++){
                    printf("Cima\n");
                }
                break;
            case 4:
                for(i; i<=5; i++){
                    printf("Baixo\n");
                }
                break;
            
            default:
                printf("Comando não aceito");
                break;
        }
        break;
    case 2:
        printf("**BISPO**\n");
        printf("Para que lando você quer mover\n"); //Escolhendo o sentido da peça
        printf("[1].  Cima lado Direita\n");
        printf("[2].  Cima lado Esquerda\n");
        printf("[3]. Baixo lado Direita\n");
        printf("[4]. Baixo lado Esquerda\n");
        printf("Faça seu movimento >>>");
        scanf("%d", &sentido);

        switch (sentido) // Switch para o sentido
        {                // Para os quatro movimento usando a estrutura while
           case 1:
                while(i <= 5){ 
                    printf("Cima, Direita\n");
                    i++;
                }
                break;
            case 2:
                while(i <= 5){
                    printf("Cima, Esquerda\n");
                    i++;
                }
                break;
            case 3:
                while(i <= 5){
                    printf("Baixo, Direita\n");
                    i++;
                }
                break;
            case 4:
                while(i <= 5){
                    printf("Baixo, Esquerda\n");
                    i++;
                }
                break;
            
            default:
                printf("Comando não aceito");
                break;
        }
        break;
        
    case 3:
        printf("**RAINHA**\n");
        printf("Para que lando você quer mover\n"); //Escolhendo o sentido da peça
        printf("[1]. Direita\n");
        printf("[2]. Esquerda\n");
        printf("[3]. Cima\n");
        printf("[4]. Baixo\n");
        printf("Faça seu movimento >>>");
        scanf("%d", &sentido);

        switch (sentido) // Switch para que lado vai a peça
        {                // Para os quatro movimento usando a estrutura do while
           case 1:
                do{ 
                    printf("Direita\n");
                    i++;
                }while(i <= 8);
                break;
            case 2:
                do{
                    printf("Esquerda\n");
                    i++;
                }while(i <= 8);
                break;
            case 3:
                do{
                    printf("Cima\n");
                    i++;
                }while(i <= 8);
                break;
            case 4:
                do{
                    printf("Baixo\n");
                    i++;
                }while(i <= 8);
                break;
            
            default:
                printf("Comando não aceito");
                break;
        }
        break;
    
    default:
        printf("Comando não aceito");
        break;
    }


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    //================
    //Nivel Aventureiro
    //================

     i = 1, movimento = 1; //zerando para não ter nenhum problema

    printf("---ESCOLHA AS PEÇAS---\n");
    printf("[1]. Torre\n");
    printf("[2]. Bispo\n");  // Opção de escoha com switch
    printf("[3]. Rainha\n");
    printf("[4]. Cavalo\n");
    printf("digite aqui sua opção >>>");
    scanf("%d", &peca);

    switch (peca)     // Switch com as peças e junto com as estruturas de repetição
    {
        case 1:  // Caso escolha a Torre
            printf("**TORRE**\n");
            printf("Para que lando você quer mover\n"); //Escolhendo o sentido da peça
            printf("[1]. Direita\n");
            printf("[2]. Esquerda\n");
            printf("[3]. Cima\n");
            printf("[4]. Baixo\n");
            printf("Faça seu movimento >>>");
            scanf("%d", &sentido);

            switch (sentido) // Switch para o sentido
            {            // Para os qutros movimentos usando a estrutura for
            case 1:
                    for(i; i<=5; i++){
                        printf("Direita\n");
                    }
                    break;
                case 2:
                    for(i; i<=5; i++){
                        printf("Esquerda\n");
                    }
                    break;
                case 3:
                    for(i; i<=5; i++){
                        printf("Cima\n");
                    }
                    break;
                case 4:
                    for(i; i<=5; i++){
                        printf("Baixo\n");
                    }
                    break;
                
                default:
                    printf("Comando não aceito");
                    break;
            }
            break;

        case 2:  // Caso escolha o Bispo
            printf("**BISPO**\n");
            printf("Para que lando você quer mover\n"); //Escolhendo o sentido da peça
            printf("[1].  Cima lado Direita\n");
            printf("[2].  Cima lado Esquerda\n");
            printf("[3]. Baixo lado Direita\n");
            printf("[4]. Baixo lado Esquerda\n");
            printf("Faça seu movimento >>>");
            scanf("%d", &sentido);

            switch (sentido) // Switch para o sentido
            {                // Para os quatro movimento usando a estrutura while
            case 1:
                    while(i <= 5){ 
                        printf("Cima, Direita\n");
                        i++;
                    }
                    break;
                case 2:
                    while(i <= 5){
                        printf("Cima, Esquerda\n");
                        i++;
                    }
                    break;
                case 3:
                    while(i <= 5){
                        printf("Baixo, Direita\n");
                        i++;
                    }
                    break;
                case 4:
                    while(i <= 5){
                        printf("Baixo, Esquerda\n");
                        i++;
                    }
                    break;
                
                default:
                    printf("Comando não aceito");
                    break;
            }
            break;
            
        case 3: // Caso escolha a Rainha
            printf("**RAINHA**\n");
            printf("Para que lando você quer mover\n"); //Escolhendo o sentido da peça
            printf("[1]. Direita\n");
            printf("[2]. Esquerda\n");
            printf("[3]. Cima\n");
            printf("[4]. Baixo\n");
            printf("Faça seu movimento >>>");
            scanf("%d", &sentido);

            switch (sentido) // Switch para que lado vai a peça
            {                // Para os quatro movimento usando a estrutura do while
            case 1:
                    do{ 
                        printf("Direita\n");
                        i++;
                    }while(i <= 8);
                    break;
                case 2:
                    do{
                        printf("Esquerda\n");
                        i++;
                    }while(i <= 8);
                    break;
                case 3:
                    do{
                        printf("Cima\n");
                        i++;
                    }while(i <= 8);
                    break;
                case 4:
                    do{
                        printf("Baixo\n");
                        i++;
                    }while(i <= 8);
                    break;
                
                default:
                    printf("Comando não aceito");
                    break;
            }
            break;

        case 4: // Caso escolha o Cavalo
            printf("**Cavalo**\n");
            printf("Para que lando você quer mover\n"); //Escolhendo o sentido da peça
            printf("[1].  Cima lado Direita\n");
            printf("[2].  Cima lado Esquerda\n");
            printf("[3]. Baixo lado Direita\n");
            printf("[4]. Baixo lado Esquerda\n");
            printf("Faça seu movimento >>>");
            scanf("%d", &sentido);

            switch (sentido) // Switch para que lado vai a peça
            {                // Para os quatro movimento usando a estrutura do while e for
            case 1:        
                    while(movimento--){     // A estrutura while está sendo usada para orientar direita e esquerda
                        for(i; i<=2; i++){    // A estrutura for usada para sentido cima e baixo
                            printf("Cima\n");
                        }
                        printf("Direita\n");
                    }
                    break;
                case 2:
                    while(movimento--){ 
                        for(i; i<=2; i++){
                            printf("Cima\n");
                        }
                        printf("Esquerda\n");
                    }
                    break;
                case 3:
                    while(movimento--){ 
                        for(i; i<=2; i++){
                            printf("Baixo\n");
                        }
                        printf("Direita\n");
                    }
                    break;
                case 4:
                    while(movimento--){ 
                        for(i; i<=2; i++){
                            printf("Baixo\n");
                        }
                        printf("Esquerda\n");
                    }
                    break;
                
                default:
                    printf("Comando não aceito");
                    break;

            }
            break;
        
        default:
            printf("Comando não aceito");
            break;
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //================
    //Nivel Mestre
    //================

    i = 1, movimento = 1; //zerando para não ter nenhum problema

    printf("==== JOGO DE XADREZ ====\n");
    printf("[1] Torre\n");
    printf("[2] Bispo\n");
    printf("[3] Rainha\n");
    printf("[4] Cavalo\n");
    printf("Escolha a peça>>> ");
    scanf("%d", &peca);

    switch (peca) {

        // ===== TORRE =====
        case 1:
            printf("**TORRE**\n");
            printf("Pra onde quer mover?\n");
            printf("[1] Direita\n");
            printf("[2] Esquerda\n");
            printf("[3] Cima\n");
            printf("[4] Baixo\n");
            printf("Digite: ");
            scanf("%d", &sentido);

            switch (sentido) {
                case 1: 
                    torre(5, "Direita"); 
                    break;
                case 2: 
                    torre(5, "Esquerda"); 
                    break;
                case 3: 
                    torre(5, "Cima"); 
                    break;
                case 4: 
                    torre(5, "Baixo"); 
                    break;
                default: printf("Movimento inválido!\n");
            }
            break;

        // ===== BISPO =====
        case 2:
            printf("**BISPO**\n");
            printf("Pra onde quer mover?\n");
            printf("[1] Cima Direita\n");
            printf("[2] Cima Esquerda\n");
            printf("[3] Baixo Direita\n");
            printf("[4] Baixo Esquerda\n");
            printf("Digite: ");
            scanf("%d", &sentido);

            switch (sentido) {
                case 1: 
                    bispo(5, 5, "Cima", "Direita"); 
                    break;
                case 2: 
                    bispo(5, 5, "Cima", "Esquerda"); 
                    break;
                case 3: 
                    bispo(5, 5, "Baixo", "Direita"); 
                    break;
                case 4: 
                    bispo(5, 5, "Baixo", "Esquerda"); 
                    break;
                default: printf("Movimento inválido!\n");
            }
            break;

        // ===== RAINHA =====
        case 3:
            printf("**RAINHA**\n");
            printf("Pra onde quer mover?\n");
            printf("[1] Direita\n");
            printf("[2] Esquerda\n");
            printf("[3] Cima\n");
            printf("[4] Baixo\n");
            printf("Digite: ");
            scanf("%d", &sentido);

            switch (sentido) {
                case 1: 
                    rainha(8, "Direita"); 
                    break;
                case 2: 
                    rainha(8, "Esquerda");
                    break;
                case 3: 
                    rainha(8, "Cima"); 
                    break;
                case 4: 
                    rainha(8, "Baixo"); 
                    break;
                default: printf("Movimento inválido!\n");
            }
            break;

        // ===== CAVALO =====
        case 4:
printf("**Cavalo**\n");
            printf("Para que lando você quer mover\n"); //Escolhendo o sentido da peça
            printf("[1].  Cima lado Direita\n");
            printf("[2].  Cima lado Esquerda\n");
            printf("[3]. Baixo lado Direita\n");
            printf("[4]. Baixo lado Esquerda\n");
            printf("Faça seu movimento >>>");
            scanf("%d", &sentido);

            switch (sentido) // Switch para que lado vai a peça
            {                // Para os quatro movimento usando a estrutura do while e for
            case 1:        
                    while(movimento--){     // A estrutura while está sendo usada para orientar direita e esquerda
                        for(i; i<=2; i++){    // A estrutura for usada para sentido cima e baixo
                            printf("Cima\n");
                        }
                        printf("Direita\n");
                    }
                    break;
                case 2:
                    while(movimento--){ 
                        for(i; i<=2; i++){
                            printf("Cima\n");
                        }
                        printf("Esquerda\n");
                    }
                    break;
                case 3:
                    while(movimento--){ 
                        for(i; i<=2; i++){
                            printf("Baixo\n");
                        }
                        printf("Direita\n");
                    }
                    break;
                case 4:
                    while(movimento--){ 
                        for(i; i<=2; i++){
                            printf("Baixo\n");
                        }
                        printf("Esquerda\n");
                    }
                    break;
                
                default:
                    printf("Comando não aceito");
                    break;
    }

    return 0;
 }
}
