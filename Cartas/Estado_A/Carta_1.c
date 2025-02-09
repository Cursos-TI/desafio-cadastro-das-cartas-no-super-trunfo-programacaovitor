#include <stdio.h>

int main () {

    int populacao; //População total da cidade
    int pontos_turisticos; //Número de Pontos Turisticos da cidade
    float PIB; //PIB da cidade
    float Area_em_KM²; //área em KM² da cidade
    char Nome_da_Cidade[50]; //Nome da cidade em até 50 caracteres
    char Estado = 'A'; //Estado definido como "A"
    char Codigo_da_Carta [3] = "A01"; //Código da carta definido em 3 caracteres: "AO1"
    
    printf("Estado: %c\n", Estado); //Imprimindo o Estado
    printf("Código da carta: %s\n", Codigo_da_Carta); //Imprimindo o Código da Carta
    
    printf("Entre com o nome da Cidade: "); //Solicitando ao usuário que entre com o nome da cidade
    scanf(" %[^\n]", Nome_da_Cidade); //Lendo o nome da cidade, OBS: %[^\n] foi usado para permitir que ao inserir a cidade, o usuário possa usar o caractere "Espaço" sem que apresente bugs na interação/leitura.
    printf("Cidade: %s\n", &Nome_da_Cidade); //Exibindo o nome da cidade
    
    printf("Entre com a população: "); //Solicitando ao usuário que entre com a população da cidade
    scanf("%d", &populacao); //Lendo a população da cidade
    printf("População: %d\n", populacao); //Exibindo a população da cidade

    printf("Entre com o Número de Pontos Turisticos: "); //Solicitando ao usuário que entre com a quantidade de pontos turísticos
    scanf(" %d", &pontos_turisticos); //Lendo a quantidade de pontos turísticos
    printf("Pontos Turisticos:%d\n", pontos_turisticos); //Exibindo a quantidade de pontos turísticos

    printf("Entre com o PIB: "); //Solicitando ao usuário que entre com o PIB da cidade
    scanf("%f", &PIB); //Lendo o PIB da cidade
    printf("PIB: %f\n", PIB); //Exibindo o PIB da cidade

    printf("Entre com a área em KM²: "); //Solicitando ao usuáro que entre com a área em km²
    scanf(" %f", &Area_em_KM²); //Lendo a área em km²
    printf("Área em KM²: %f\n", Area_em_KM²); //Exibindo a área em km²

    return 0;


    
}