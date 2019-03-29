# Objetivo
Crear un nuevo planificador basado en prioridades.
Crear un programa para probarlo.

# Herramientas
+ git 
+ make
+ xv6

# Conceptos:
+ Planificación.
  + Seleccionar al proceso a ejeuctar.
+ Cambio de contexto.
  + Cambio que ocurre cuando el CPU deja de ejecutar un proceso y ejecuta otro.
  + Guardar contexto: Stack pointer, Program Counter (PC).
+ Estados de un proceso.


# ¿Qué aprendí?
+ Aprendí sobre conceptos clave al hablar de un planificador como PID, el estado de un proceso, su prioridad; que existe una tabla de procesos llamada Ptable.proc donde se encuentra la información detallada de los procesos que corren en el sistema. Xv6, el sistema operativo que usamos, maneja un scheduler por round robin, es decir, da una vuelta entera a los procesos uno por uno. Existe CPU: Preemptive, No preemptive, donde el CPU puede o no, tomar medidas preventivas al administrar procesos.


# URL del Commit
+ https://github.com/AndresChoza/so-gp1/commit/24bec2c706ba4022072157a9fe2b82afa9c0a7f7
+ https://github.com/AndresChoza/so-gp1/commit/29fb68063d422422d758162f365a7a8d431ee870
+ https://github.com/AndresChoza/so-gp1/commit/70ba33d89a300176ebb3cbcd27da7ce3a49af7c8  (Última clase)
