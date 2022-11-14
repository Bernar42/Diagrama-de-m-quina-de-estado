#ifndef MY_LIB_H
#define MY_LIB_H
#define ON 1
#define OFF 0
#include <stdio.h>

  int bomba1=0;

struct nivel { //sensor de nivel
 int nivel_min;
 int nivel_max;
 int nivel_cisterna;
};


// prototipos

int obtener_nivel (int);

void encendido_automatico_bombo (int, int);

//funciones


int obtener_nivel (int valor_cargado)//leo el nivel
{
    int nivel=0;
    if (valor_cargado==1)
        nivel = 1;
    return nivel;
}

void encendido_automatico_bombo (int a, int b)
{
    if (a==1 && b==1)
        bomba1=ON;

}

#endif // MY_LIB_H
