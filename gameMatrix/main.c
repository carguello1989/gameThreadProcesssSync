
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

    int **p;

    switch (dim) {
        case 1:
                //getNoReturn(&p, 2, 5);
                p = get(levelEasySize, levelEasySize);
                fillZero(p ,levelEasySize, levelEasySize);
                //printMatrixStyle(p, levelEasySize, levelEasySize);
                createInitialRoom(p);
                printMatrixStyle(p, levelEasySize, levelEasySize);
                freeArray(p ,levelEasySize);


                break;
        case 2:
                //getNoReturn(&p, 2, 5);
                p = get(levelIntermediateSize, levelIntermediateSize);
                fillZero(p ,levelIntermediateSize, levelIntermediateSize);
                printMatrixStyle(p, levelIntermediateSize, levelIntermediateSize);
                freeArray(p ,levelIntermediateSize);

                break;
        case 3:

                //getNoReturn(&p, 2, 5);
                p = get(levelHardSize, levelHardSize);
                fillZero(p ,levelHardSize, levelHardSize);
                printMatrixStyle(p, levelHardSize, levelHardSize);
                freeArray(p ,levelHardSize);

                break;
        default:

            break;
    }
 return 0;
}