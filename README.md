# Controlador de nivel de tanque de agua

### Memoria descriptiva
Mi sistema posee dos estados funcionales, un estado "apagar_bomba", el cual se encuentra sensando el nivel obtenido del sensor y 
otro  estado llamado "encender_bomba", el cual dará la orden de encender el motor siempre y cuando haya agua en el tanque cisterna

![image](https://user-images.githubusercontent.com/111571047/202871528-94e26bc0-0e87-44fd-bf2d-41182d3c4cb1.png)

> Donde "n" hace enfásis en nivel
	
## Código
> Archivo header my.lib

	#ifndef MY_LIB_H
	#define MY_LIB_H
	#include <stdio.h>

	typedef enum {
	     OFF = 0,
  	    ON = 1
	}estados_t;

	typedef struct  { //sensor de nivel

	 char nivel_de_agua; 	//nivel de agua en el sensor
 	 char nivel_cisterna;	//nivel de agua en el tanque cisterna
 	 char n_set;		//nivel de agua seteado en la configuracion
	}nivel_t;


	// prototipos

	nivel_t start_f (void);
	estados_t encender_bomba_f (nivel_t);
	estados_t apagar_bomba_f (nivel_t);


	#endif // MY_LIB_H

> Archivo main.c con switch

	#include <stdio.h>
	#include "my_lib.h"
	
	int main(void) {

  	      nivel_t config;
    	    estados_t estado = nivel_de_agua_f;

      	  config = start_f();
        	while (1)
	{
  	      switch (estado)
    	    {
      	  case ON:
        	    estado=encender_bomba_f(config);
          	  break;

	        case OFF:
  	          estado=apagar_bomba_f(config);
    	        break;
      	  default:
        	    return 0;
          	  break;
	}
	 return 0;
	}
	
> Archivo main.c con punteros

	#include "mylib.h"

	int main() {
  	  nivel_t config;
  	  estados_t estado = OFF;
  	  estados_t (*fsm[])(nivel_t) = {apagar_bomba_f, encender_bomba_f}
 	   config = start_f();
 	   while(1) estado = (*fsm[estado])(config);
 	 return 0;
	}

> Archivo config.conf

			# nivel que debe de tener el tanque de agua
			n_set 1 // deberia de estar siempre lleno
 	
> Funciones de estado
	
	estados_t encender_bomba_f(nivel_t){
  	  nivel_t;

 	   if(nivel_cisterna = 1 && nivel_de_agua < n_set){
 	       estado = ON;
 	   }
  	  else
    	{
	         estado = OFF;
  	  }
  	return estado;
	}

	estados_t apagar_bomba_f(nivel_t){

  	  nivel_t;
    	if(nivel_cisterna = 1 && nivel_de_agua = n_set){ // en mi sistema, el tanque esta lleno o vacio, siendo que deberia de estar siempre lleno
    	    estado = OFF;
    	}

  	return estado;
	}
