#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct t_hora{
    int hora, minutos;
};

struct t_paciente {
    char nombre[30];
    t_hora llegada;
};

struct t_lista_pacientes {
    struct t_paciente pacientes[MAX];
    int npacientes;
    int maxhora = 0;
    int maxmin = 0;
    float mediahora = 0;
    float mediamin = 0;
};


int main(void){

    struct t_lista_pacientes lista;

    // a) Mostrar la quantitat de pacients que hi ha.

        lista.npacientes;

    // b) Mostrar el nom de pacients que estan mes temps //Suponemos que nmpacientes és el numero de pacientes registrados.
    //esperant.



        for (i=0;i<lista.npacientes;i++){
            lista.maxhora = maxhora + lista.pacientes[i].llegada.hora;
            lista.maxmin = maxmin + lista.pacientes[i].llegada.hora;
        }

        lista.mediahora = lista.mediahora / lista.npacientes;

        for (i=0;i<lista.npacientes;i++){
            if ((lista.pacientes[i].llegada.hora > (lista.mediahora * 0.30)) && (lista.pacientes[i].llegada.min > (lista.mediamin *0.30))) {
                maxhora = lista.pacientes[i].llegada.hora;
                maxmin = lista.pacientes[i].llegada.min;

            }
        }










}
