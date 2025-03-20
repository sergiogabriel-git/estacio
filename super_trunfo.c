#include <stdio.h>

int main() {
	//Variáveis
	unsigned char estadoA;
	unsigned char estadoB;
	char codigoA[3];
	char codigoB[3];
	char nomeA[30];
	char nomeB[30];
	float populacaoA;
	float populacaoB;
	float areaA;
	float areaB;
	float pibA;
	float pibB;
	int turisticosA;
	int turisticosB;
	float densidadeA;
	float densidadeB;
	float pib_captaA;
	float pib_captaB;
	float super_poderA;
	float super_poderB;
	unsigned char atributo;

	//Formulario Carta 1
	printf("Carta 1\n");
	printf("Estado: ");
	scanf("%uc", &estadoA);
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

	//Formulario Carta 2
	printf("Carta 2\n");
	printf("Estado: ");
	scanf("%uc", &estadoB);
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

	//Calculo Densidade e PIB per capta Carta 1
	densidadeA = (populacaoA / areaA);
	pib_captaA = (pibA / populacaoA);

	//Calculo Densidade e PIB per capta Carta 2
	densidadeB = (populacaoB / areaB);
	pib_captaB = (pibB / populacaoB);

	//Calculo Super Poder
	super_poderA = populacaoA + areaA + pibA + turisticosA + pib_captaA + densidadeA;
	super_poderB = populacaoB + areaB + pibB + turisticosB + pib_captaB + densidadeB;

	printf("\n-*-*-*-*-*-\n");

	//Saida Carta 1
	printf("Carta 1\n");
	printf("Estado: %uc\n", estadoA);
	printf("Código: %s\n", codigoA);
	printf("Nome da cidade: %s\n", nomeA);
	printf("População: %3.f\n", populacaoA);
	printf("Area: %.3f\n", areaA);
	printf("PIB: %.3f\n", pibA);
	printf("Pontos turísticos: %d\n", turisticosA);
	printf("Densidade populacional: %.3f\n", densidadeA);
	printf("PIB per capta: %.3f\n", pib_captaA);

	printf("\n-*-*-*-*-*-\n");

	//Saida Carta 2
	printf("Carta 2\n");
	printf("Estado: %uc\n", estadoB);
	printf("Código: %s\n", codigoB);
	printf("Nome da cidade: %s\n", nomeB);
	printf("População: %.3f\n", populacaoB);
	printf("Area: %.3f\n", areaB);
	printf("PIB: %.3f\n", pibB);
	printf("Pontos turísticos: %d\n", turisticosB);
	printf("Densidade populacional: %.3f\n", densidadeB);
	printf("PIB per capta: %.3f\n", pib_captaB);

	printf("\n-*-*-*-*-*-\n");
	
	//Menu
	printf("SUPER TRUNFO\n(1)População\n(2)Área\n(3)PIB\n(4)Pontos Turísticos\n(5)Densidade Populacional\n(6)PIB per Capta\n(7)Super Poder\n> ");
	scanf("%uc", &atributo);

	//Estrutura opção de atributo
	switch(atributo) {
		case 1:
			printf("Atributo selecionado: População\n");
			if(populacaoA == populacaoB) {
				printf("### Empate! ###");
			} else if(populacaoA > populacaoB) {
				printf("### Carta 1 venceu! ###\n");
			} else {
				printf("### Carta 2 venceu! ###\n");
			}
		break;
		case 2:
			printf("Atributo selecionado: Área\n");
			if(areaA == areaB) {
				printf("### Empate! ###\n");
			} else if(areaA > areaB) {
				printf("### Carta 1 venceu! ###\n");
			} else {
				printf("### Carta 2 venceu! ###\n");
			}
		break;
		case 3:
			printf("Atributo selecionado: PIB\n");
			if(pibA == pibB) {
				printf("### Empate! ###\n");
			} else if(pibA > pibB) {
				printf("### Carta 1 venceu! ###\n");
			} else {
				printf("### Carta 2 venceu! ###\n");
			}
		break;
		case 4:
			printf("Atributo selecionado: Pontos Turísticos\n");
			if(turisticosA == turisticosB) {
				printf("### Empate! ###\n");
			} else if(turisticosA > turisticosB) {
				printf("### Carta 1 venceu! ###\n");
			} else {
				printf("### Carta 2 venceu! ###\n");
			}
		break;
		case 5:
			printf("Atributo selecionado: Densidade Populacional\n");
			if(densidadeA == densidadeB) {
				printf("### Empate! ###\n");
			} else if(densidadeA > densidadeB) {
				printf("### Carta 1 venceu! ###\n");
			} else {
				printf("### Carta 2 venceu! ###\n");
			}
		break;
		case 6:
			printf("Atributo selecionado: PIB per Capta\n");
			if(pib_captaA == pib_captaB) {
				printf("### Empate! ###\n");
			} else if(pib_captaA > pib_captaB) {
				printf("### Carta 1 venceu! ###\n");
			} else {
				printf("### Carta 2 venceu! ###\n");
			}
		break;
		case 7:
			printf("Atributo selecionado: SUPER PODER!\n");
			if(super_poderA == super_poderB) {
				printf("### EMPATE!!! ###\n");
			} else if(super_poderA > super_poderB) {
				printf("### Carta 1 venceu! ###\n");
			} else {
				printf("### Carta 2 vnceu! ###\n");
			}
		break;
		default:
			printf("Opção inválida.\n");
		}

	return(0);
}
