#include <stdio.h>
#include <stdlib.h>
#include "mycommon.h"
#include "common.h"
#include "common_threads.h"
#include <unistd.h>

volatile float v=0;

void *hilo1(void *arg){
   int z=25;
   int y=350;
   v=z/y;
   return NULL;
}

void *hilo2(void *arg){
   sleep(2);
   int x=1250;
   v=x*v;
   return NULL;
}


int main(int argc, char *argv[]){
   pthread_t h1, h2;
   Pthread_create(&h1,NULL,hilo1,NULL);
   Pthread_create(&h2,NULL,hilo2,NULL);
   printf("Valor x*v=%d\n", v);
   return 0;
}
