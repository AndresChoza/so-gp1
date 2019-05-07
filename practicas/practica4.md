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
  +EL bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.

+ Archivos mapeados a memoria
  + Es un bloque de memoria compartida que esta asociado a un archivo.
  + Los cambios en el bloque se guardan automaticamente.
  
# ¿Qué Aprendí?

# URL del Commit