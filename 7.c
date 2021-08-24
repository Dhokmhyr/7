#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define CARTASPORs_MAZO 40;

/*
int crear_s_mazos (int cantidad_de_jugadores) {
    int cantidad_de_s_mazos = 0;
    int cantidad_de_jugadores = 9;
    int jugador_por_s_mazo = 3;
    int cantidad_de_s_mazos = cantidad_de_jugadores/  jugador_por_s_mazo;
    if (cantidad_de_jugadores % jugador_por_s_mazo != 0) {
        cantidad_de_s_mazos++;
    }
    printf ("%d", cantidad_de_s_mazos);
    return 0;
}
*/


int cantidad_jugadores () {
    int cant_j = 0;
    printf("Cuantos jugadores desean enfrentar a la banca? (1 a 5)\n");
    scanf("%d", &cant_j);
    while (cant_j < 1 || cant_j > 5) {
        printf("Deben ser entre 1 y 5 jugadores\n");
        printf("Cuantos jugadores desean enfrentar a la banca?\n");
        scanf("%d", &cant_j);
    }

    return cant_j;
}

int cantidad_rondas () {
    int cant_r = 0;
    printf("Cuantas rondas desean jugar en esta partida? (1 a 5)\n");
    scanf("%d", &cant_r);
    while (cant_r < 1 || cant_r > 5) {
        printf("Deben seleccionar entre 1 y 5 rondas\n");
        printf("Cuantas rondas desean jugar en esta partida?\n");
        scanf("%d", &cant_r);
    }

    return cant_r;
}
/*
int cantidad_rondas () {
    int cant_r = 0;
    printf("Cuantas rondas desean jugar en esta partida? (1 a 5)\n");
    scanf("%d", &cant_r);
    while (cant_r < 1 || cant_r > 5) {
        printf("Deben seleccionar entre 1 y 5 rondas\n");
        printf("Cuantas rondas desean jugar en esta partida?\n");
        scanf("%d", &cant_r);
    }

    return cant_r;
}
*/
int repartir () {}

struct s_carta
{
    int numero;
    char palo;
    float valor;
};

struct s_jugador
{
    int pozo;
    int apuesta;
    int suma;
};
//hacer cartas con PALO, VALOR, FIGURA.


int main (){
    int cant_j = 1;
    int cant_r = 1;

    
/*
    printf(">>>> 7 Y MEDIO <<<<\n");
    cant_j = cantidad_jugadores ();
    cant_r = cantidad_rondas();
    //printf("Jugadores: %i\nRondas: %i\n", cant_j, cant_r);
    
    struct s_jugador jugador[cant_j];

    jugador[0].pozo = 100000;
    jugador[0].apuesta = 0;
    jugador[0].suma = 0;

    for(int i=1 ; i < cant_j ; i++){
        jugador[i].pozo = 5000;
        jugador[i].apuesta = 0;
        jugador[i].suma = 0;
        //jugador[i];
    }

    for(int i=0 ; i < cant_j ; i++){
        printf("El jugador %i, tiene un pozo de %i, apuesta de %i y suma de %i\n",i,   jugador[i].pozo,  jugador[i].apuesta,  jugador[i].suma);    
    }
*/
    struct s_carta carta[40];

    for (int i=0; i<40; i++){
        carta[i].numero = (1+ i- ((i/ 10)* 10));
        carta[i].palo = (i/ 10);
        carta[i].valor = carta[i].numero;
        if((1+ i- ((i/ 10)* 10))> 7) {
            carta[i].numero = ((i- ((i/ 10)* 10))+ 3);
            carta[i].valor = 0.5;
        }
    }

    //repartir();
/*
    int jugador [cant_j+1];
    int i = 0;
    while (i<=cant_j){
        printf("Jugador %i", i);
        i++;
    }
*/
    // crear array para la cantidad de jugadores.
    //ver si conviene hacer una matriz, para almacenar los datos de las partidas
    //en una los j y en cada pos interna los datos.
    //por ahora por turnos, despues ver posibilidad de dividir pantalla en 6 y clear
    //buscar manipulacion de pantalla.
    getchar();
    return 0;
}






//////////////////////////////////////////////////////////////////////////////////

/*
    int shuff(int cards[]) {
    int t;
    int i;
    int desk[CARTASXM];
    for (i=0;i<CARTASXM;i++)
    desk[i] = (i/13+3)*100 + i%13 + 1; //WHAT??
    srand(time(NULL));
    for (i = 0; i < CARTASXM; i++) {
        do {
            t = rand() % CARTASXM;
        } 
        while (desk[t] == 0);
        cards[i] = desk[t];
        desk[t] = 0;
    }
    return 0;
}
*/

//numeros entre 2
/*
#include <stdio.h>

int hola(){
    return 10;
}

int  hola(int nose){
    return nose + 10;    
}



int main (){

    printf("%d", hola(10));
    printf("%d", hola(10));
    return 0;
}
*/