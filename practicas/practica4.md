# Objetivo
Hacer un 'spike' sobre IPC: En particular señales, fork/exec, memoria compartida (shared memory) y archivos mapeados a memoria.

# Herramientas
+ git 
+ gcc
+ xv6

# Conceptos:

+ IPC
  + Comunicación entre procesos.

+ Señales: 
  + Es un IPC, consta de un proceso emisor y un proceso receptor. 
  El emisor manda una señal y el receptor deja de hacer lo que se encuentra haciendo y ejecuta el código de la señal.
  + Existen varias señales, para listarlas puedo usar el comando 'kill -l'.

+ Memoria Compartida
  + Se crea un bloque de memoria, el bloque de memoria tiene un key (llave).
  + Cualquier proceso con el key se puede conectar al bloque.
  + El bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.

+ Archivos mapeados a memoria
  + Es un bloque de memoria compartida que esta asociado a un archivo.
  + Los cambios en el bloque se guardan automaticamente.
  
# ¿Qué Aprendí?
+ El IPC es una manera de eficientar la ejecución de procesos dado que se pueden comunicar entre sí por medio de señales las cuales sirven para saber qué y cuando ejecutar una acción o bien rutina de interrupción.
+ La Memoria compartida es aquella que puede ser usada por dos procesos al mismo tiempo, facilita la comunicación y la manera en la que comparten información.

# URL del Commit
https://github.com/AndresChoza/so-gp1/commit/cb131f5bd8657db82f5bc8c16f143e6ce35f359d
