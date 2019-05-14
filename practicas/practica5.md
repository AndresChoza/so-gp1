# Objetivo
Hacer un spike sobre hilos, semáforos y locks.

# Herramientas
+ git
+ gcc

# Conceptos:

+ Hilos
  + Es un proceso ligero que solo consta de un stack. Y el código y el heap los comparte con el proceso principal.
  + Pueden ejecutar funciones diferentes.

+ Semáforos: 
  + Es una variable global.
  + Soporta dos operaciones:
    ++ Incrementar (sem_post) siempre incrementa en uno.
    ++ Decrementa (sem_wait) si el valor del semáforo es mayor que 0 decremente si es igual a cero se suspende.
  + Controlar acceso a recursos.

+ Lock
  + Es una variable global. 
  + Soporta dos operaciones
    ++ lock (bloqueo) adquirir el lock. Si el lock ya está tomado el hilo/proceso se suspende. 
    ++ unlock (desbloquear) liberar el lock.
  + Secciones Críticas.
  
# ¿Qué Aprendí?
+ El problema de 'Dining Philosophers' es una analogía para los hilos que necesitan recursos y de qué manera se debe de administrar para que cada hilo tenga, en cierto momento, recursos para llevar a cabo su tarea.
+ La importancia de los semáforos como mecanismo para el control de acceso a recursos por parte de los hilos, así como los locks.


# URL del Commit
+ https://github.com/AndresChoza/so-gp1/commit/29c971d0f19fb9eb3b9cce43e9147f10a2c45d01
