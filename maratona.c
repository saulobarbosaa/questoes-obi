//Questao 1 - Maratona
//Raphael Barroso e Saulo Barbosa

#include <stdio.h>

int main(void) {
	
	int numPostos, distMedia, postoAnt, postoAtual = 0, i;
	char resultado = 'S';

	//Entrada do numero de postos e a distância intermediária máxima do atleta
	scanf("%d%d", &numPostos, &distMedia);
  
	//Repetição da entrada dos postos de acordo com o numero de postos
	for (i = 0; i < numPostos; i++) {
  	
    	scanf("%d", &postoAnt);
    	
    	//Troca de valores com o posto atual e anterior
    	if ((resultado == 'S') && ((postoAnt - postoAtual) <= distMedia))
        	postoAtual = postoAnt;

  	}
  	
  	//Verificando se o atleta consegue completar a maratona ou nao
  	if ((resultado == 'S') && ((42195-postoAtual) <= distMedia))
        printf("S");   
	else
        printf("N");

  return 0;
}
