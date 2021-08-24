#include <stdio.h>
#include <string.h>

#define CARTASPORMAZO 40
#define PALOSPORMAZO 4
#define FIGURASPORMAZO 3


struct s_carta
{
    int numero;         //del 1 al 7 y del 10 al 12
    int palo;           //0=Oro 1=Espadas 2=Bastos 3=Copas
    float valor;        //del 1 al 7 el mismo que el numero, del 10 al 12 medio
};

char palos[PALOSPORMAZO][25];



void init_mazo(struct s_carta* carta){

    for (int i=0; i<CARTASPORMAZO; i++){
        carta[i].numero = (1+ i- ((i/ 10)* 10));
        carta[i].palo = (i/ 10);
        carta[i].valor = carta[i].numero;
        if((1+ i- ((i/ 10)* 10))> 7) {
            carta[i].numero = ((i- ((i/ 10)* 10))+ 3);
            carta[i].valor = 0.5;
        }
    }
}



int main(void){

    struct s_carta cartas[CARTASPORMAZO];

    //DEFINIR LOS NOMBRES DE LOS PALOS
    strcpy(palos[0], "Oro");
    strcpy(palos[1], "Espada");
    strcpy(palos[2], "Basto");
    strcpy(palos[3], "Copa");
    
    init_mazo(cartas);

    for(int i=0; i<CARTASPORMAZO; i++){
        printf("Carta %i es: %i de %s, vale %.1f\n", i, cartas[i].numero, palos[cartas[i].palo],cartas[i].valor);
    }
    return 0;
};











/*
    INTENTO 1

    //Lista de cartas
    char lista_cartas[40][20]; //"Caballo de Espadas" es el mas largo (18)
    
    Para cargar un array
    lista_cartas[0][0] = 'A';
    lista_cartas[0][1] = 'N';
    lista_cartas[0][2] = 'C';
    lista_cartas[0][3] = 'H';
    lista_cartas[0][4] = 'O';
    lista_cartas[0][5] = ' ';
    lista_cartas[0][6] = 'D';
    lista_cartas[0][7] = 'E';
    lista_cartas[0][8] = ' ';
    lista_cartas[0][9] = 'O';
    lista_cartas[0][10] = 'R';
    lista_cartas[0][11] = 'O';
    lista_cartas[0][12] = '\0';
    reemplazado por strcpy(donde se copia, que se copia)
    
    strcpy(lista_cartas[0], "Ancho de Oro");
    strcpy(lista_cartas[1], "Dos de Oro");
    strcpy(lista_cartas[2], "Tres de Oro");
    strcpy(lista_cartas[3], "Cuatro de Oro");
    strcpy(lista_cartas[4], "Cinco de Oro");
    strcpy(lista_cartas[5], "Seis de Oro");
    strcpy(lista_cartas[6], "Siete de Oro");
    strcpy(lista_cartas[7], "Sota de Oro");
    strcpy(lista_cartas[8], "Caballo de Oro");
    strcpy(lista_cartas[9], "Rey de Oro");
    strcpy(lista_cartas[10], "Ancho de Bastos");
    strcpy(lista_cartas[11], "Dos de Bastos");
    strcpy(lista_cartas[12], "Tres de Bastos");
    strcpy(lista_cartas[13], "Cuatro de Bastos");
    strcpy(lista_cartas[14], "Cinco de Bastos");
    strcpy(lista_cartas[15], "Seis de Bastos");
    strcpy(lista_cartas[16], "Siete de Bastos");
    strcpy(lista_cartas[17], "Sota de Bastos");
    strcpy(lista_cartas[18], "Caballo de Bastos");
    strcpy(lista_cartas[19], "Rey de Bastos");
    strcpy(lista_cartas[20], "Ancho de Espadas");
    strcpy(lista_cartas[21], "Dos de Espadas");
    strcpy(lista_cartas[22], "Tres de Espadas");
    strcpy(lista_cartas[23], "Cuatro de Espadas");
    strcpy(lista_cartas[24], "Cinco de Espadas");
    strcpy(lista_cartas[25], "Seis de Espadas");
    strcpy(lista_cartas[26], "Siete de Espadas");
    strcpy(lista_cartas[27], "Sota de Espadas");
    strcpy(lista_cartas[28], "Caballo de Espadas");
    strcpy(lista_cartas[29], "Rey de Espadas");
    strcpy(lista_cartas[30], "Ancho de Copas");
    strcpy(lista_cartas[31], "Dos de Copas");
    strcpy(lista_cartas[32], "Tres de Copas");
    strcpy(lista_cartas[33], "Cuatro de Copas");
    strcpy(lista_cartas[34], "Cinco de Copas");
    strcpy(lista_cartas[35], "Seis de Copas");
    strcpy(lista_cartas[36], "Siete de Copas");
    strcpy(lista_cartas[37], "Sota de Copas");
    strcpy(lista_cartas[38], "Caballo de Copas");
    strcpy(lista_cartas[39], "Rey de Copas");

    //Lista Valores
    float lista_valores[40];

    lista_valores[0] = 1;
    lista_valores[1] = 2;
    lista_valores[2] = 3;
    lista_valores[3] = 4;
    lista_valores[4] = 5;
    lista_valores[5] = 6;
    lista_valores[6] = 7;
    lista_valores[7] = 0.5;
    lista_valores[8] = 0.5;
    lista_valores[9] = 0.5;
    lista_valores[10] = 1;
    lista_valores[11] = 2;
    lista_valores[12] = 3;
    lista_valores[13] = 4;
    lista_valores[14] = 5;
    lista_valores[15] = 6;
    lista_valores[16] = 7;
    lista_valores[17] = 0.5;
    lista_valores[18] = 0.5;
    lista_valores[19] = 0.5;
    lista_valores[20] = 1;
    lista_valores[21] = 2;
    lista_valores[22] = 3;
    lista_valores[23] = 4;
    lista_valores[24] = 5;
    lista_valores[25] = 6;
    lista_valores[26] = 7;
    lista_valores[27] = 0.5;
    lista_valores[28] = 0.5;
    lista_valores[29] = 0.5;
    lista_valores[30] = 1;
    lista_valores[31] = 2;
    lista_valores[32] = 3;
    lista_valores[33] = 4;
    lista_valores[34] = 5;
    lista_valores[35] = 6;
    lista_valores[36] = 7;
    lista_valores[37] = 0.5;
    lista_valores[38] = 0.5;
    lista_valores[39] = 0.5;

    //CANT MAXIMA DE CARTAS POR JUGADOR 0.5*12+1 = 13 uno solo.... usar sumar hasta?

    int i = 0;
    for (i = 0; i <= 39; i++){
        printf("la carta %s vale %.1f\n",  lista_cartas[i], lista_valores[i]);

    }
*/





/*
    INTENTO 2

    int i = 0;
    for (i=0 ; i<=10 ; i++){
        carta[i].numero = i+1;
        carta[i].palo = 'O';
        carta[i].valor = i+1;
        if (i >= 7){
            carta[i].numero = i+3;
            carta[i].valor = 0.5;
        }
    }

    for (i=10 ; i<=20 ; i++){
        carta[i].numero = i-9;
        carta[i].palo = 'E';
        carta[i].valor = i-9;
        if (i >= 17){
            carta[i].numero = i-7;
            carta[i].valor = 0.5;
        }
    }
    for (i=20 ; i<=30 ; i++){
        carta[i].numero = i-19;
        carta[i].palo = 'B';
        carta[i].valor = i-19;
        if (i >= 27){
            carta[i].numero = i-17;
            carta[i].valor = 0.5;
        }
    }
    for (i=30 ; i<=40 ; i++){
        carta[i].numero = i-29;
        carta[i].palo = 'C';
        carta[i].valor = i-29;
        if (i >= 37){
            carta[i].numero = i-27;
            carta[i].valor = 0.5;
        }
    }
    */
