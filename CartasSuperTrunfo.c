#include <stdio.h>

int main(){

  // ===== CARTA 1 =====
  char estado1, codigo1[5], nomecidade1[50];
  unsigned long int populacao1;
  int pontosturisticos1;
  float area1, pib1;
  float densidade1, pib_per_capita1;
  float superpoder1;

  // ===== CARTA 2 =====
  char estado2, codigo2[5], nomecidade2[50];
  unsigned long int populacao2;
  int pontosturisticos2;
  float area2, pib2;
  float densidade2, pib_per_capita2;
  float superpoder2;

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
  scanf("%lu", &populacao1);

  printf("Área (em km²): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosturisticos1);

  // ==========================
  // ENTRADAS DE DADOS - CARTA 2
  // ==========================

  printf("\nCadastro da carta 2\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado2);

  printf("Código da carta (ex: B03): ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomecidade2);

  printf("População: ");
  scanf("%lu", &populacao2);

  printf("Área (em km²): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosturisticos2);

  // ==========================
  // CÁLCULOS
  // ==========================

  densidade1 = populacao1 / area1;
  pib_per_capita1 = pib1 / populacao1;

  densidade2 = populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;

  //===========================
  //SUPER PODER
  //===========================

  superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pib_per_capita1 + (1 / densidade1);
  superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pib_per_capita2 + (1 / densidade2);

  // ==========================
  // EXIBIÇÃO DAS CARTAS
  // ==========================

  printf("\n\n=== CARTAS CADASTRADAS ===\n");

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", nomecidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos turísticos: %d\n", pontosturisticos1);
  printf("Densidade populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capta: %,2f\n", pib_per_capita1);
  printf("Super poder: %.2f\n", superpoder1);

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", nomecidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turísticos: %d\n", pontosturisticos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capta: %,2f\n", pib_per_capita2);
  printf("Super poder: %.2f\n", superpoder2);
// --------------------------------------------------

  //============================
  //COMPARAÇÃO DAS CARTAS
  //============================

  printf("\n\nComparação de cartas\n");

  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);

  //MENOR DENSIDADE VENCE

  printf("Densidade Populacional: Carta 1 venceu (%d)\n",densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
  printf("Super poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

  return 0;
}
