#include <stdio.h>

int main() {
	//Variáveis
	char estadoA[1], estadoB[1];
	char codigoA[3], codigoB[3];
	char nomeA[30], nomeB[30];
	float populacaoA, populacaoB;
	float areaA, areaB;
	float pibA, pibB;
	int turisticosA, turisticosB;
	float densidadeA, densidadeB;
	float pib_captaA, pib_captaB;
	float super_poderA, super_poderB;
	unsigned char atributo;

	//Formulario Carta 1
	printf("Carta 1\n");

	printf("Estado:\n");
	scanf("%s", &estadoA);

	printf("Código:\n");
	scanf("%s", &codigoA);

	printf("Nome:\n");
	scanf("%s", &nomeA);

	printf("População:\n");
	scanf("%f", &populacaoA);

	printf("Área:\n");
	scanf("%f", &areaA);

	printf("PIB:\n");
	scanf("%f", &pibA);

	printf("Pontos Turisticos:\n");
	scanf("%d", &turisticosA);

	//Calculo Densidade e PIB per capta Carta 1
	densidadeA = (populacaoA / areaA);
	pib_captaA = (pibA / populacaoA);

	//Formulario Carta 2
	printf("Carta 2\n");

	printf("Estado:\n");
	scanf("%s", &estadoB);

	printf("Código:\n");
	scanf("%s", &codigoB);

	printf("Nome:\n");
	scanf("%s", &nomeB);

	printf("População:\n");
	scanf("%f", &populacaoB);

	printf("Área:\n");
	scanf("%f", &areaB);

	printf("PIB:\n");
	scanf("%f", &pibB);

	printf("Pontos Turisticos:\n");
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
	printf("Estado: %s\n", estadoA);
	printf("Código: %s\n", codigoA);
	printf("Nome da cidade: %s\n", nomeA);
	printf("População: %.3f\n", populacaoA);
	printf("Area: %.3f\n", areaA);
	printf("PIB: %.3f\n", pibA);
	printf("Pontos turísticos: %d\n", turisticosA);
	printf("Densidade populacional: %.3f\n", densidadeA);
	printf("PIB per capta: %.3f\n", pib_captaA);

	printf("---\n");

	//Saida Carta 2
	printf("Carta 2\n");
	printf("Estado: %s\n", estadoB);
	printf("Código: %s\n", codigoB);
	printf("Nome da cidade: %s\n", nomeB);
	printf("População: %.3f\n", populacaoB);
	printf("Area: %.3f\n", areaB);
	printf("PIB: %.3f\n", pibB);
	printf("Pontos turísticos: %d\n", turisticosB);
	printf("Densidade populacional: %.3f\n", densidadeB);
	printf("PIB per capta: %.3f\n", pib_captaB);

        printf("*-*-*-*-*\n");

	//Comparação
	printf("Atributo de comparação\n(0)População\n(1)Área\n(2)PIB\n(3)Pontos Turísticos\n(4)Densidade\n(5)PIB per Capta\n(6)Super Poder:\n");
	scanf("%u", &atributo);
	
	if(atributo == 0) {
	  if(populacaoA > populacaoB) {
	    printf("Carta 1 vence!\n");
	  } else {
	    printf("Carta 2 vence!\n");
	  }
	}
	else if(atributo == 1) {
	  if(areaA > areaB) {
	    printf("Carta 1 vence!\n");
	  } else {
	    printf("Carta 2 vence!\n");
	  }
	}
	else if(atributo == 2) {
	  if(pibA > pibB) {
	    printf("Carta 1 vence!\n");
	  } else {
	    printf("Carta 2 vence!\n");
	  }
	}
	else if(atributo == 3) {
	  if(turisticosA > turisticosB) {
	    printf("Carta 1 vence!\n");
	  } else {
	    printf("Carta 2 vence!\n");
	  }
	}
	else if(atributo == 4) {
	  if(densidadeA > densidadeB) {
	    printf("Carta 1 vence!\n");
	  } else {
	    printf("Carta 2 vence!\n");
	  }
	}
	else if(atributo == 5) {
	  if(pib_captaA > pib_captaB) {
	    printf("Carta 1 vence!\n");
	  } else {
	    printf("Carta 2 vence!\n");
	  }
	} 
	else if(atributo == 6) {
	  if(super_poderA > super_poderB) {
	    printf("Carta 1 vence!\n");
	  } else {
	    printf("Carta 2 vence!\n");
	  }
	} else {
	  printf("Atributo indisponível.\n");
	}

	return(0);
}
