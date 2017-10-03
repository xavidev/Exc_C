#include <stdio.h>
#include <stdlib.h>
#define CONVOCATORIAS 6

struct t_asignatura {
    char nombre[100];
    int codigo;
    double notas [CONVOCATORIAS];
};

struct t_datos_personales {
    char nombre[80];
    char domicilio[100];
    int dni;
    int edad;
    t_asignatura datos_academicos[20];
};

t_datos_personales curso[120];

int main()
{
    // 1. Indica el tipus de les expressions quan siguen
    //vàlides i “error” en cas contrario per al següent codi:

    curso[100].datos_academicos[5].notas[3] //Correcte
    curso.datos_academicos["fisica"] // Incorrecte
    curso[0].nombre[0] // Correcte
    datos_personales[20].asignatura[3].codigo // Incorrecte


}
