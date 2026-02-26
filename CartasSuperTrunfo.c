#include <stdio.h>

int main(){


  // ===== CARTA 1 =====
    char estado1, codigo1[5], nomecidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;


  // =====CARTA 2 =====
  char estado2, codigo2[5], nomecidade2[50];
  int populacao2,pontosturisticos2;
  float area2, pib2;


  // ===========================
  // ENTRADAS DE DADOS - CARTA 1
  // ===========================

  printf("Cadastro da carta 1\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado1);

  printf("Código da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomecidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área (em km²): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosturisticos1);


  //==========================
  // Entrada de dados carta 2
  //==========================

  printf("Cadastro da carta 2\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado2);
  
  printf("Código da carta (ex: B03): ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomecidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área (em km²): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosturisticos2);

  
  //==========================
  //Exibição das cartas
  //==========================

  printf("\n\n=== CARTAS CADASTRADAS ===\n");

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", nomecidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos turísticos: %d\n", pontosturisticos1);

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", nomecidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turísticos: %d\n", pontosturisticos2);

return 0;
} 
