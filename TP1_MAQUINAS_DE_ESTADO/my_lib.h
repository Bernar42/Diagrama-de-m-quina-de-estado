#ifndef MY_LIB_H
#define MY_LIB_H
#define ON 1
#define OFF 0
#include <stdio.h>

  int bomba1=0;

struct nivel { //sensor de nivel
 char nivel_min;
 char nivel_max;
};
void bomba1_on (void);

void bomba1_on (void)
{
    bomba1=ON;
}
void bomba1_off (void);
void bomba1_off (void)
{
    bomba1=OFF;
}


#endif // MY_LIB_H
