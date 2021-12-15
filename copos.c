//Questao 2 - Jogo dos Copos
//Raphael Barroso e Saulo Barbosa

#include <stdio.h>

// 1 = a moeda esta no copo
// 0 = nao esta no copo

int main (void) {
	
	//Declaracao das variaveis
	int n, i, aux, troca;
	char letra;
	int a = 0, b = 0, c = 0;
	
	//Entrada do numero de partidas e o copo onde a moeda estará inicialmente
	scanf("%d", &n);
	scanf(" %c", &letra);
	
	//Declaração de um valor inicial para as moedas
	if (letra == 'A' || letra == 'a')
		a++;
	else {
		if (letra == 'B' || letra == 'b')
			b++;
		else
			if(letra == 'C' || letra == 'c')
				c++;
	}

	for(i = 0; i < n; i++) {
		
		scanf("%d", &troca);
		
		switch (troca) {
			
			case 1:
				aux = a;
           		a = b;
          		b = aux;
				break;
				
			case 2:
				
				aux = b;
				b = c;
				c = aux;
				break;
				
			case 3:
				
				aux = a;
				a = c;
				c = aux;
				break;
		}
	}
	
	if (a == 1)
		printf("A");
	else{
		if (b == 1)
			printf("B");
		else {
			if (c == 1) 
				printf("C");
		}
	}

	return 0;
}
