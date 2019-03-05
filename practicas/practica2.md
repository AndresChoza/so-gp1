## Objetivo
Modificar al programa init para imprimir un mensaje de bienvenida.
Modificar al programa sh para ejecutar al programa anterior.

## Herramientas
+ Make
+ gcc
+ git

## Conceptos 

1)Proceso
+ Instancia de un programa.
+ Está compuesto de 3 partes:
++ Stack: Variables, es un espacio limitado, es dinámico, crece de arriba hacia abajo. Puede ocurrir un stack overflow.
++ Heap: Área de memoria dinámica = RAM + SWAP.
++ Código: Segmentado, es decir, es solo una parte.

+ Tiene estados.

+ Se crean mediante dos llamadas a sistema:
++ Fork: Clonar.
++ Exec: Cambia código.

+ Hay un proceso padre.
++ Init: Primer proceso que crea el Sistema Operativo, sirve de template para crear otros procesos.

## Qué Aprendí


## URL del Commit
https://github.com/AndresChoza/so-gp1/commit/1c3c25a421213c8a12af009ea66425121441ef4f
