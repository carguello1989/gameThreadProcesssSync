
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "methods.h"
#include "map.h"
#include "monsters.h"
#include "monster.h"
#include "monsterLiveRoom.h"
#include "monsterRoom.h"
#include "warrior.h"
#include "warriorRoomNumber.h"
#include "warriorAttackNumber.h"
#include "warriorLiveNumber.h"


void fillMatrix(int dim, int matriz[dim][dim]);
void showMatrix(int dim, int matriz[dim][dim]);
void doOperation(int dim, int matriz[dim][dim]);
int getNumberMonters(int dim);
void printMenu();

int main(){
    //Crear tamaño de los mapas-------------------
    // --- EASY
    struct map levelEasy;
    levelEasy.size=10;
    // --- INTERMEDIATE
    struct map levelIntermediate;
    levelIntermediate.size=20;
    // --- HARD
    struct map levelHard;
    levelHard.size=30;

    //Crear cantidad de monstruos-----------------
    // --- EASY
    struct monsters levelMonstersEasy;
    levelMonstersEasy.size = getNumberMonters(levelEasy.size);
    // --- INTERMEDIATE
    struct monsters levelMonstersIntermediate;
    levelMonstersIntermediate.size= getNumberMonters(levelIntermediate.size);
    // --- HARD
    struct monsters levelMonstersHard;
    levelMonstersHard.size= getNumberMonters(levelHard.size);


    //Crear  Heroe-----------------
    struct warrior warrior;
    warrior.id = 1;
   

    //Crear  Heroe Ataque-----------------
    struct warriorAttackNumber warriorAttackNumber;
    warriorAttackNumber.id = 1;
    warriorAttackNumber.attackNumber=1;



    //Crear  Heroe Numeros de vidas-----------------
    struct warriorLiveNumber warriorLiveNumber;
    warriorLiveNumber.id = 1;
    warriorLiveNumber.liveNumber = 5;

    srand(time(NULL));
    int dim;
    printMenu();
    scanf("%d",&dim);

    int matriz1[levelEasy.size][levelEasy.size];
    int matriz2[levelIntermediate.size][levelIntermediate.size];
    int matriz3[levelHard.size][levelHard.size];

    switch (dim) {
        case 1:
                doOperation(levelEasy.size,matriz1);

                break;
        case 2:
                doOperation(levelIntermediate.size,matriz2);
                break;
        case 3:
                doOperation(levelHard.size,matriz3);
                break;
        default:

            break;
    }
 return 0;
}