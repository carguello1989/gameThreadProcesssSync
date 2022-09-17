
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

int main(){
    // Create a structure variable of myStructure called s1
    struct map levelEasy;
    levelEasy.size=10;
    struct monsters levelMonstersEasy;
    levelMonstersEasy.size = getNumberMonters(levelEasy.size);
    // Create a structure variable of myStructure called s1
    struct map levelIntermediate;
    levelIntermediate.size=20;
    struct monsters levelMonstersIntermediate;
    levelMonstersIntermediate.size= getNumberMonters(levelIntermediate.size);
    // Create a structure variable of myStructure called s1
    struct map levelHard;
    levelHard.size=20;
    struct monsters levelMonstersHard;
    levelMonstersHard.size= getNumberMonters(levelHard.size);


    srand(time(NULL));
    int dim;
    printf("Presione 1 para nivel facil:");
    printf("\n");

    printf("Presione 2 para nivel normal:");
    printf("\n");

    printf("Presione 3 para nivel dificil: ");
    printf("\n");
    printf("\n");

    printf("Ingrese el nivel que desea jugar: ");
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