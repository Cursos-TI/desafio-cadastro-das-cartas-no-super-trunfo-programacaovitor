#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {

    int populacao; //População total da cidade
    int pontos_turisticos2; //Número de Pontos Turisticos da cidade
    float PIB; //PIB da cidade
    float Area_em_KM2; //área em KM² da cidade
    char Nome_da_Cidade1[50]; //Nome da cidade em até 50 caracteres
    char Codigo_da_Carta2 [3];
    char Estado3 [] = "A"; //Estado = A


    printf("Entre com a população: \n");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Entre com o Número de Pontos Turisticos: \n");
    scanf(" %d", &pontos_turisticos2);
    printf("Pontos Turisticos:%d\n", pontos_turisticos2);

    printf("Entre com o PIB: \n");
    scanf("%f", &PIB);
    printf("PIB: %f\n", PIB);

    printf("Entre com a área em KM²: \n");
    scanf(" %f", &Area_em_KM2);
    printf("Área em KM²: %f\n", Area_em_KM2);
    
    printf("Entre com o nome da Cidade (Lembrando que se houver cidades que tenham a necessidade de colocar espaço, separar por '_', ex: Juiz_de_Fora\n");
    scanf("%s", &Nome_da_Cidade1);
    printf("Cidade: %s\n", &Nome_da_Cidade1);



    return 0;
}