# exam-so-electronica-2019-01.

## PUNTO 1

Para las ejecuciones del primer programa se calcularon los siguientes tiempos con el argumento 10000000:

* 56.866 milisegundos
* 56.711 milisegundos
* 56.318 milisegundos
* 56.674 milisegundos
* 56.686 milisegundos
 
Para las ejecuciones del segundo programa se calcularon los siguientes tiempos 10000000:

* 447.54 milisegundos
* 457.427 milisegundos
* 454.134 milisegundos
* 447.808 milisegundos
* 452.585 milisegundos

La gran diferencia entre los tiempos se da debido a que en el primer programa `threads.c` la puerta se cierra y se abre fuera del 
for, por lo cual lo hace una sola vez, el programa `threads2.c` toma más tiempo debido a que por cada entrada al for cierra y 
abre la puerta, teniendo que hacerlo tantas veces como el tamaño del número (10000000 en este caso)

La función para medir el tiempo se encontró en: https://davidcapello.com/blog/cpp/medir-el-tiempo-de-una-rutina/ 


## PUNTO 2


## PUNTO 3

En este punto se utilizó la función `wait()` para garantizar que el  proceso hijo siempre espere al proceso padre en su ejecución

## PUNTO 4

* Pregunta 1: El uso de la CPU por cada proceso debería ser del 100 %, debido a que en la instrucción se está indicando que cada
uno use el 100 % de esta (5:100), de forma que cuando un proceso termine, el otro se ejecuta, ocupando así el 100 % de la CPU

* Pregunta 2: El proceso 0 toma 4 tiempos en su ejecución, mientras que el llamado al proceso I/O toma 6 tiempos, debido a que el 
primer tiempo de este proceso corresponde a la ejecución, 4 más corresponden al uso de la I/O o la espera a que el dispositivo
complete la tarea y un tiempo más para cambiar el estado a realizado.
