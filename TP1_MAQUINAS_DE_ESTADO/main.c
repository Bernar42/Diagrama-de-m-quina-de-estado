#include <stdio.h>
#include "my_lib.h"

int main(void) {

    struct nivel sensor1;
    //seteo los niveles de los sensores manualmante

    sensor1.nivel_min=1;// si 0, indica que hay agua
    sensor1.nivel_max=0;// si 1, indica que esta lleno
    sensor1.nivel_cisterna=1;

    int nivel_actual=0;// lo use como aux para guardar el valor devuelto por la funcion "obtener_nivel"

    while (1)
{
        nivel_actual=obtener_nivel(sensor1.nivel_max);// le paso el valor guardado en max, es un valor obtenido de los sensores
        while(sensor1.nivel_cisterna!=0)
    {
         encendido_automatico_bombo(nivel_actual, sensor1.nivel_cisterna);
         return 1;
    }

    }

  return 0;
}
