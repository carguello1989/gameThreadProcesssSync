# gameThreadProcesssSync
Juego en C con Hilos, Procesos, y Sincronización aplicándo en un ejercicio práctico que utilice regiones críticas

Descripcion:
Implemente en C un juego que tenga las siguientes características:
Al inicio del juego se deberá crear un mapa de un calabozo en memoria
compuesto de N cuartos conectados entre sí distribuidos como celdas
en una matriz de tamaño NxN. Deben cumplirse las siguientes
restricciones:
Debe existir un cuarto inicial y un cuarto final
El cuarto inicial no debe estar conectado al cuarto final
Todo cuarto debe conectar con al menos otro cuarto, pero ningún
cuarto debe conectar con más de 3 cuartos
Todo cuarto debe estar poder alcanzarse desde el cuarto inicial, es
decir, no debe existir un grupo de cuartos conectados entre sí,
pero desconectados del resto
Se permiten los callejones sin salida
Se permiten celdas vacías en la matriz, es decir, celdas que no son
cuartos
Todos los cuartos deben ser cuadrados y caber en una celda de la
matriz
Cada cuarto puede tener un tesoro, o una trampa, o nada.
Seleccione aleatoriamente cuál de los elementos tendrá con una
probabilidad del 30% que sea tesoro, 40% trampa, 30% nada.
Una vez creado el mapa, deberá crear N/2 monstruos, estos monstruos
deberán colocarse cada uno en un cuarto distinto. No debe haber
monstruos en el cuarto inicial.
Cada monstruo tendrá un ciclo de vida que consistirá en los
siguientes pasos:
Si el héroe está en el mismo cuarto que el monstruo, atacar
al héroe causándole 1 punto de daño.
Si el monstruo está sólo en el cuarto, moverse a otro cuarto
siempre que no sea el cuarto inicial o el cuarto final.
No deberá moverse a otro cuarto si ya está ocupado por otro
monstruo
Podrá moverse a otro cuarto si está ocupado por el héroe
Después de realizar cualquier acción el monstruo deberá
entrar en estado de espera por una cantidad de tiempo
aleatoria entre 0.1 y 0.5 segundos
Los monstruos iniciarán con 3 puntos de vida.
Cada monstruo deberá estar implementado con su propio hilo.
Cuando un monstruo intenta ingresar a un cuarto deberá
consultar primero si ese cuarto está ocupado, esta acción debe
realizarse de forma sincronizada para evitar que dos monstruos
accidentalmente ingresen al mismo cuarto.
Una vez el mapa y los monstruos estén creados, deberá colocar al héroe
en el mapa. El héroe podrá tener los siguientes comportamientos:
Leer un comando del teclado, estos comandos pueden ser
W para moverse al cuarto hacia el norte.
A para moverse al cuarto hacia el oeste.
S para moverse al cuarto hacia el sur.
D para moverse al cuarto hacia el este.
Espacio para atacar si hay un monstruo en ese cuarto.
E para interactuar con un tesoro si hay un tesoro en ese
cuarto.
Cuando el héroe realiza una acción deberá esperar 0.1 segundos
antes de realizar la próxima acción.
Si el héroe ingresa a un cuarto con una trampa, la trampa se
activará y causará 1 punto de daño al héroe. Luego desaparecerá
y no volverá a activarse nunca más.
Si el héroe encuentra un tesoro este podrá darle uno de los
siguientes beneficios de forma aleatoria:
+1 de ataque
+1 de vida
Si el héroe llega a 0 de vida, se acabará el juego en condición de
derrota.
Si el héroe llega al cuarto final, se acabará el juego en condición
de victoria.
El héroe no puede ingresar a un cuarto si hay un monstruo en ese
cuarto.
El héroe sólo podrá atacar a un monstruo si este está en estado de
espera.
El héroe iniciará la partida con 5 puntos de vida y un punto de
ataque.
El héroe deberá ser implementado con uno o más hilos según sea
necesario.
Deberá utilizar estructuras de sincronización para las regiones críticas
que identifique en el juego.
Al iniciar la partida el juego pedirá al usuario ingresar la dificultad,
Fácil corresponderá a N = 10, Media corresponderá a N = 20, Difícil
corresponderá a N=30.
Deberá crear una representación gráfica del juego para que el jugador
pueda interactuar. Se recomienda investigar la biblioteca graphics.h
