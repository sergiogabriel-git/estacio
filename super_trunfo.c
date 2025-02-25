#include <stdio.h>

//Super Trunfo - Cidades
int main() {
	char estado[1];
	char estado1[1];
	char codigo[3];
	char codigo1[3];
	char nome[30];
	char nome1[30];
	float populacao;
	float populacao1;
	float area;
	float area1;
	float pib;
	float pib1;
	int turismo;
	int turismo1;

	printf("Carta 1\n");

	printf("Estado: ");
	scanf("%s", &estado);

	printf("Código: ");
	scanf("%s", &codigo);

	printf("Nome da Cidade: ");
	scanf("%s", &nome);
	
	printf("População: ");
	scanf("%f", &populacao);

	printf("Área: ");
	scanf("%f", &area);

	printf("PIB: ");
	scanf("%f", &pib);

	printf("Turismo: ");
	scanf("%d", &turismo);

	printf("Carta 2\n");

	printf("Estado: ");
	scanf("%s", &estado1);

	printf("Código: ");
	scanf("%s", &codigo1);

	printf("Nome da Cidade: ");
	scanf("%s", &nome1);
	
	printf("População: ");
	scanf("%f", &populacao);

	printf("Área: ");
	scanf("%f", &area1);

	printf("PIB: ");
	scanf("%f", &pib1);

	printf("Turismo: ");
	scanf("%d", &turismo1);
	
	printf("\n---\n");
	printf("Carta 1\n");
	printf("Estado: %s\n", estado);
	printf("Código: %s\n", codigo);
	printf("Nome da Cidade: %s\n", nome);
	printf("População: %.3f\n", populacao);
	printf("Área: %.3f\n", area);
	printf("PIB: %.3f\n", pib);
	printf("Turismo: %d\n", turismo1);
	printf("\n");
	printf("Carta 2\n");
	printf("Estado: %s\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", nome1);
	printf("População: %.3f\n", populacao1);
	printf("Área: %.3f\n", area1);
	printf("PIB: %.3f\n", pib1);
	printf("Turismo: %d\n", turismo1);
	
	return 0;
}
