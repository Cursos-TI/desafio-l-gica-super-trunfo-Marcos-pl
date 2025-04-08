#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Código atualizado com a Densidade Demográfica e comparação inversa.

int main()
{

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

     // Contadores de pontos para cada carta
    int pontosCarta1 = 0, pontosCarta2 = 0;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Cadastro das Carta 1:
    printf("Digite os dados da primeira carta\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1); 
    printf("Código (por exemplo A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade1);  // Lê o nome da cidade
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2); 
    printf("Código (por exemplo B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade2);  // Lê o nome da cidade
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Calcular a densidade demográfica

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

   // Menu Interativo para comparar atributos
   int opcao;
   
   {
       printf("\nEscolha um atributo para comparar (ou 0 para sair):\n");
       printf("1 - População\n");
       printf("2 - Área\n");
       printf("3 - PIB\n");
       printf("4 - Pontos Turísticos\n");
       printf("5 - Densidade Demográfica\n");
       printf("6 - Comparar Todos os Atributos\n");
       printf("0 - Sair\n");
       printf("Opção: ");
       scanf("%d", &opcao);

       if (opcao < 0 || opcao > 6) {
           printf("\nOpção inválida. Tente novamente.\n");
       }

       switch (opcao)
       {
       case 1: // Comparar População
           if (populacao1 > populacao2)
           {
               printf("\nA cidade %s tem mais população que %s.\n", cidade1, cidade2);
               pontosCarta1++;
           }
           else if (populacao1 < populacao2)
           {
               printf("\nA cidade %s tem mais população que %s.\n", cidade2, cidade1);
               pontosCarta2++;
           }
           else
           {
               printf("\nAs cidades %s e %s têm a mesma população.\n", cidade1, cidade2);
           }
           break;

       case 2: // Comparar Área
           if (area1 > area2)
           {
               printf("\nA cidade %s tem uma área maior que %s.\n", cidade1, cidade2);
               pontosCarta1++;
           }
           else if (area1 < area2)
           {
               printf("\nA cidade %s tem uma área maior que %s.\n", cidade2, cidade1);
               pontosCarta2++;
           }
           else
           {
               printf("\nAs cidades %s e %s têm a mesma área.\n", cidade1, cidade2);
           }
           break;

       case 3: // Comparar PIB
           if (pib1 > pib2)
           {
               printf("\nA cidade %s tem um PIB maior que %s.\n", cidade1, cidade2);
               pontosCarta1++;
           }
           else if (pib1 < pib2)
           {
               printf("\nA cidade %s tem um PIB maior que %s.\n", cidade2, cidade1);
               pontosCarta2++;
           }
           else
           {
               printf("\nAs cidades %s e %s têm o mesmo PIB.\n", cidade1, cidade2);
           }
           break;

       case 4: // Comparar Pontos Turísticos
           if (pontos1 > pontos2)
           {
               printf("\nA cidade %s tem mais pontos turísticos que %s.\n", cidade1, cidade2);
               pontosCarta1++;
           }
           else if (pontos1 < pontos2)
           {
               printf("\nA cidade %s tem mais pontos turísticos que %s.\n", cidade2, cidade1);
               pontosCarta2++;
           }
           else
           {
               printf("\nAs cidades %s e %s têm o mesmo número de pontos turísticos.\n", cidade1, cidade2);
           }
           break;

       case 5: // Comparar Densidade Demográfica (menor valor vence)
           if (densidade1 < densidade2)
           {
               printf("\nA cidade %s tem menor densidade demográfica que %s.\n", cidade1, cidade2);
               pontosCarta1++;
           }
           else if (densidade1 > densidade2)
           {
               printf("\nA cidade %s tem menor densidade demográfica que %s.\n", cidade2, cidade1);
               pontosCarta2++;
           }
           else
           {
               printf("\nAs cidades %s e %s têm a mesma densidade demográfica.\n", cidade1, cidade2);
           }
           break;

       case 6: // Comparar Todos os Atributos
           // Comparando População
           if (populacao1 > populacao2)
           {
               pontosCarta1++;
           }
           else if (populacao1 < populacao2)
           {
               pontosCarta2++;
           }

           // Comparando Área
           if (area1 > area2)
           {
               pontosCarta1++;
           }
           else if (area1 < area2)
           {
               pontosCarta2++;
           }

           // Comparando PIB
           if (pib1 > pib2)
           {
               pontosCarta1++;
           }
           else if (pib1 < pib2)
           {
               pontosCarta2++;
           }

           // Comparando Pontos Turísticos
           if (pontos1 > pontos2)
           {
               pontosCarta1++;
           }
           else if (pontos1 < pontos2)
           {
               pontosCarta2++;
           }

           // Comparando Densidade Demográfica
           if (densidade1 < densidade2)
           {
               pontosCarta1++;
           }
           else if (densidade1 > densidade2)
           {
               pontosCarta2++;
           }

           // Exibição do resultado final de cada atributo
    printf("\nResultado final das comparações dos atributos:\n");
    
    // Comparação População
    printf("\nPopulação:\n");
    if (populacao1 > populacao2)
        printf("A cidade %s tem mais população que %s.\n", cidade1, cidade2);
    else if (populacao1 < populacao2)
        printf("A cidade %s tem mais população que %s.\n", cidade2, cidade1);
    else
        printf("As cidades %s e %s têm a mesma população.\n", cidade1, cidade2);

    // Comparação Área
    printf("\nÁrea:\n");
    if (area1 > area2)
        printf("A cidade %s tem uma área maior que %s.\n", cidade1, cidade2);
    else if (area1 < area2)
        printf("A cidade %s tem uma área maior que %s.\n", cidade2, cidade1);
    else
        printf("As cidades %s e %s têm a mesma área.\n", cidade1, cidade2);

    // Comparação PIB
    printf("\nPIB:\n");
    if (pib1 > pib2)
        printf("A cidade %s tem um PIB maior que %s.\n", cidade1, cidade2);
    else if (pib1 < pib2)
        printf("A cidade %s tem um PIB maior que %s.\n", cidade2, cidade1);
    else
        printf("As cidades %s e %s têm o mesmo PIB.\n", cidade1, cidade2);

    // Comparação Pontos Turísticos
    printf("\nPontos Turísticos:\n");
    if (pontos1 > pontos2)
        printf("A cidade %s tem mais pontos turísticos que %s.\n", cidade1, cidade2);
    else if (pontos1 < pontos2)
        printf("A cidade %s tem mais pontos turísticos que %s.\n", cidade2, cidade1);
    else
        printf("As cidades %s e %s têm o mesmo número de pontos turísticos.\n", cidade1, cidade2);

    // Comparação Densidade Demográfica
    printf("\nDensidade Demográfica:\n");
    if (densidade1 < densidade2)
        printf("A cidade %s tem menor densidade demográfica que %s.\n", cidade1, cidade2);
    else if (densidade1 > densidade2)
        printf("A cidade %s tem menor densidade demográfica que %s.\n", cidade2, cidade1);
    else
        printf("As cidades %s e %s têm a mesma densidade demográfica.\n", cidade1, cidade2);

    // Resultado Final
    printf("\nResultado final das comparações:\n");
    printf("Total de pontos da cidade %s: %d\n", cidade1, pontosCarta1);
    printf("Total de pontos da cidade %s: %d\n", cidade2, pontosCarta2);

    if (pontosCarta1 > pontosCarta2)
        printf("\nA cidade vencedora é: %s\n", cidade1);
    else if (pontosCarta1 < pontosCarta2)
        printf("\nA cidade vencedora é: %s\n", cidade2);
    else
        printf("\nAs cidades %s e %s empataram!\n", cidade1, cidade2);

           break;
    
       default:
           printf("\nOpção inválida. Tente novamente.\n");
           break;
       }

   };
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

   // Exibição do vencedor
   printf("\nResultado final:\n");
   printf("Pontos de %s: %d\n", cidade1, pontosCarta1);
   printf("Pontos de %s: %d\n", cidade2, pontosCarta2);

   if (pontosCarta1 > pontosCarta2)
   {
       printf("\nA cidade vencedora é %s!\n", cidade1);
   }
   else if (pontosCarta1 < pontosCarta2)
   {
       printf("\nA cidade vencedora é %s!\n", cidade2);
   }
   else
   {
       printf("\nAs cidades %s e %s empataram!\n", cidade1, cidade2);
   }

   return 0;
}



