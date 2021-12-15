// Questao 3 - Dario e Xerxes
// Raphael Barroso e Saulo Barbosa

#include <stdio.h>

int main(void) {

    int n, dario, xerxes, i, quant_dario = 0, quant_xerxes= 0;

    //Entrada do numero de partidas
    scanf("%d", &n);

    //contador de vencedor por partida
    for (i = 0; i < n; i++) {

        scanf("%d %d", &dario, &xerxes);

        if((xerxes== (dario+1)%5) || (xerxes== (dario+2)%5))
            quant_dario = quant_dario + 1;
        else
            quant_xerxes= quant_xerxes+ 1;
    }

    //mostra o vencedor final
    if (quant_dario > quant_xerxes) 
        printf("dario");
    else {
        if (quant_xerxes> quant_dario)
            printf("xerxes");
    }
    return 0;
}

