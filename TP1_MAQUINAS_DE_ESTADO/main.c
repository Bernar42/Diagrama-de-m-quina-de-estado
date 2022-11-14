#include <stdio.h>
#include "my_lib.h"

int main(void) {

    struct nivel sensor1;
    //seteo los niveles de los sensores manualmante

    sensor1.nivel_min=1;
    sensor1.nivel_max=0;
    sensor1.nivel_cisterna=1;

    int nivel_actual=0;

    while (1)
{
        nivel_actual=obtener_nivel(sensor1.nivel_max);
        while(sensor1.nivel_cisterna!=0)
    {
         encendido_automatico_bombo(nivel_actual, sensor1.nivel_cisterna);
         return 1;
    }

    }

  return 0;
}
