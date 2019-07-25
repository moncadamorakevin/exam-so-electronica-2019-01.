#include <stdio.h>
#include <stdlib.h>
#include "mycommon.h"
#include "common.h"
#include "common_threads.h"
#include <unistd.h>

volatile double v;
puerta puerta1;

void *hilo1(void *arg){
   cerrar_puerta(puerta1);
   double z=25;
   double y=350;
   v=z/y;
   abrir_puerta(puerta1);
   return NULL;
}

void *hilo2(void *arg){
   sleep(2);
   double x=1250;
   v=x*v;
   return NULL;
}


int main(int argc, char *argv[]){
   crear_puerta(puerta1);
   pthread_t h1, h2;
   Pthread_create(&h1,NULL,hilo1,NULL);
   Pthread_create(&h2,NULL,hilo2,NULL);
   Pthread_join(h1, NULL); //indicador de espera para cada hilo (sincronizacion)
   Pthread_join(h2, NULL);
   printf("Valor x*v=%f\n", v);
   destruir_puerta(puerta1);
   return 0;
}
