## Objetivo
Crear dos llamadas a sistema con sus respectivos comandos para apagar y reiniciar.

## Herramientas
+ Make
+ gcc (implícito)
+ Git 

## Conceptos
1)Llamadas a sistema:
+ Estan para acceder al Hardware.
+ Desde el comando son una interrupción.
+ Desde el kernel utilizan el código del Hardware específico.

2)Modo Kernel:
+ Es el bit para acceder al Hardware.
+ Se prende cuando se ejecuta el kernel.

3)Interrupciones:
+ Como el Hardware interactua con el CPU.

4)Interrupciones vía Software (trap):
+ Software comunica con el kernel, Software->CPU->Kernel.

## Qué Aprendí:
Para hacer una llamada a sistema en un SO, en este caso XV6, es necesario modificar diversos archivos .c y .h para definir los macros que usará el sistema para hacer referencias a las funciones, por otra parte se necesita modificar registros al programar nuestras funciones.

## URL del Commit:
https://github.com/AndresChoza/so-gp1/commit/b60961ebc0fc19c61b0861c2f4499c56b273da81
