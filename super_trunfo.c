#include <stdio.h>

int main() {
	//Variáveis
	char estadoA, estadoB;
	char codigoA[3], codigoB[3];
	char nomeA[30], nomeB[30];
	float populacaoA, populacaoB;
	float areaA, areaB;
	float pibA, pibB;
	int turisticosA, turisticosB;
	float densidadeA, densidadeB;
	float pib_captaA, pib_captaB;
	float super_poderA, super_poderB;

	//Formulario Carta 1
	printf("Carta 1\n");

	printf("Estado: ");
	scanf("%c", &estadoA);

	printf("Código: ");
	scanf("%s", &codigoA);

	printf("Nome: ");
	scanf("%s", &nomeA);

	printf("População: ");
	scanf("%f", &populacaoA);

	printf("Área: ");
	scanf("%f", &areaA);

	printf("PIB: ");
	scanf("%f", &pibA);

	printf("Pontos Turisticos: ");
	scanf("%d", &turisticosA);

	//Calculo Densidade e PIB per capta Carta 1
	densidadeA = (populacaoA / areaA);
	pib_captaA = (pibA / populacaoA);

	//Formulario Carta 2
	printf("Carta 2\n");

	printf("Estado: ");
	scanf("%c", &estadoB);

	printf("Código: ");
	scanf("%s", &codigoB);

	printf("Nome: ");
	scanf("%s", &nomeB);

	printf("População: ");
	scanf("%f", &populacaoB);

	printf("Área: ");
	scanf("%f", &areaB);

	printf("PIB: ");
	scanf("%f", &pibB);

	printf("Pontos Turisticos: ");
	scanf("%d", &turisticosB);

	//Calculo Densidade e PIB per capta Carta 2
	densidadeB = (populacaoB / areaB);
	pib_captaB = (pibB / populacaoB);

	//Super Poder
	super_poderA = populacaoA + areaA + pibA + turisticosA + pib_captaA + densidadeA;
	super_poderB = populacaoB + areaB + pibB + turisticosB + pib_captaB + densidadeB;
	
	printf("\n---\n");

	//Saida Carta 1
	printf("Carta 1\n");
	printf("Estado: %c\n", estadoA);
	printf("Código: %s\n", codigoA);
	printf("Nome da cidade: %s\n", nomeA);
	printf("População: %f\n", populacaoA);
	printf("Area: %.3f\n", areaA);
	printf("PIB: %.3f\n", pibA);
	printf("Pontos turísticos: %d\n", turisticosA);
	printf("Densidade populacional: %.3f\n", densidadeA);
	printf("PIB per capta: %.3f\n", pib_captaA);

	printf("---\n");

	//Saida Carta 2
	printf("Carta 2\n");
	printf("Estado: %c\n", estadoB);
	printf("Código: %s\n", codigoB);
	printf("Nome da cidade: %s\n", nomeB);
	printf("População: %f\n", populacaoB);
	printf("Area: %.3f\n", areaB);
	printf("PIB: %.3f\n", pibB);
	printf("Pontos turísticos: %d\n", turisticosB);
	printf("Densidade populacional: %.3f\n", densidadeB);
	printf("PIB per capta: %.3f\n", pib_captaB);

	//Comparação Carta 1 e Carta2
	printf("---\n");
	printf("Comparação de Cartas\n");
	printf("População: Carta 1 venceu (%d)\n", (populacaoA > populacaoB));
	printf("Área: Carta 1 venceu (%d)\n", (areaA > areaB));
	printf("PIB: Carta 1 venceu (%d)\n", (pibA > pibB));
	printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (turisticosA > turisticosB));
	printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidadeA < densidadeB));
	printf("PIB per capta: Carta 1 venceu (%d)\n", (pib_captaA > pib_captaB));
	printf("Super Poder: Carta 1 venceu (%d)\n", (super_poderA > super_poderB));

	return(0);
}
