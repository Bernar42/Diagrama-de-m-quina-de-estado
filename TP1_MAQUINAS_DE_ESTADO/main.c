#include <stdio.h>
#include "my_lib.h"

int main(void) {

    struct nivel sensor1;
    //seteo los niveles de los sesnores manualmante

    sensor1.nivel_min=1;
    sensor1.nivel_max=0;

    while (sensor1.nivel_min=1 && sensor1.nivel_max=0)
    {
        bomba1=ON;
        return 1;
    }
    while (sensor1.nivel_min=0 && sensor1.nivel_max=1)
    {
        bomba1=OFF;
        return 1;
    }

  return 0;
}
