
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "methods.h"
#include "monster.h"
#include "warrior.h"



int main(){
    //Crear tamaño de los mapas-------------------
    // --- EASY
    int levelEasySize=10;
    // --- INTERMEDIATE
    int levelIntermediateSize=20;
    // --- HARD
    int levelHardSize=30;

    //Crear cantidad de monstruos-----------------
    // --- EASY
    int levelMonstersEasySize = getNumberMonters(levelEasySize);
    // --- INTERMEDIATE
    int levelMonstersIntermediateSize= getNumberMonters(levelIntermediateSize);
    // --- HARD
    int levelMonstersHardSize= getNumberMonters(levelHardSize);


    //Crear  Heroe-----------------
    struct warrior warrior;
    warrior.id = 1;
    warrior.attackNumber = 1;
    warrior.liveNumber = 5;

    srand(time(NULL));
    int dim;
    printMenu();
    scanf("%d",&dim);

    int **p, **pointerMonsters;

    int **array1, **array2 , **array3;

    switch (dim) {
        case 1:
                //getNoReturn(&p, 2, 5);
                p = get(levelEasySize, levelEasySize, array1);
                fillZero(p ,levelEasySize, levelEasySize);
                //printMatrixStyle(p, levelEasySize, levelEasySize);
                //createInitialRoom(p);
                int N = rand() % (levelEasySize-1);
                int M = rand() % (levelEasySize-1);
                createRoom(p , N, M, levelEasySize);
                //printMatrixStyle(p, levelEasySize, levelEasySize);
                
                pointerMonsters= getArrayRoomAvailablesWithInitialRoom(p ,  N,  M,  levelEasySize, array1, pointerMonsters);
                printMatrixStyle(pointerMonsters, levelEasySize, levelEasySize);
                freeArray(p ,levelEasySize);


                break;
        case 2:
                //getNoReturn(&p, 2, 5);
                p = get(levelIntermediateSize, levelIntermediateSize, array2);
                fillZero(p ,levelIntermediateSize, levelIntermediateSize);
                createInitialRoom(p);
                //createRoom(p , levelIntermediateSize);
                printMatrixStyle(p, levelIntermediateSize, levelIntermediateSize);
                freeArray(p ,levelIntermediateSize);

                break;
        case 3:

                //getNoReturn(&p, 2, 5);
                p = get(levelHardSize, levelHardSize, array3);
                fillZero(p ,levelHardSize, levelHardSize);
                createInitialRoom(p);
                //createRoom(p , levelHardSize);
                printMatrixStyle(p, levelHardSize, levelHardSize);
                freeArray(p ,levelHardSize);

                break;
        default:

            break;
    }
 return 0;
}