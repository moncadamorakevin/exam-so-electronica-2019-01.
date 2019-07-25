# exam-so-electronica-2019-01.

## PUNTO 1

Para las ejecuciones del primer programa se calcularon los siguientes tiempos con el argumento 10000000:

56.866 milisegundos
56.711 milisegundos
56.318 milisegundos
56.674 milisegundos
56.686 milisegundos
 
Para las ejecuciones del segundo programa se calcularon los siguientes tiempos 10000000:

447.54 milisegundos
457.427 milisegundos
454.134 milisegundos
447.808 milisegundos
452.585 milisegundos

La gran diferencia entre los tiempos se da debido a que en el primer programa `threads.c` la puerta se cierra y se abre fuera del 
for, por lo cual lo hace una sola vez, el programa `threads2.c` toma más tiempo debido a que por cada entrada al for cierra y 
abre la puerta, teniendo que hacerlo tantas veces como el tamaño del número (10000000 en este caso)

La función para medir el tiempo se encontró en: https://davidcapello.com/blog/cpp/medir-el-tiempo-de-una-rutina/ 

