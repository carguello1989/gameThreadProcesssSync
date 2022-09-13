#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// STRUCTS

struct map
{
    /* data */
    int size;
};

struct monsters
{
    /* data */
    int size;
};


struct monster
{
    /* data */
    int id;
    int liveNumber;
    int roomNumber;
};

struct warrior
{
    /* data */
    int id;
    int liveNumber;
    int attackNumber;
    int roomNumber;
};




void llenar_Matriz(int dim, int matriz[dim][dim]);
void mostrar_matriz(int dim, int matriz[dim][dim]);

int main(){
    // Create a structure variable of myStructure called s1
    struct map levelEasy;
    levelEasy.size=10;
    struct monsters levelMonstersEasy;
    levelMonstersEasy.size = (levelEasy.size/2);
    // Create a structure variable of myStructure called s1
    struct map levelIntermediate;
    levelIntermediate.size=20;
    struct monsters levelMonstersIntermediate;
    levelMonstersIntermediate.size=(levelIntermediate.size/2);
    // Create a structure variable of myStructure called s1
    struct map levelHard;
    levelHard.size=20;
    struct monsters levelMonstersHard;
    levelMonstersHard.size=(levelHard.size/2);


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

    if(dim == 1){
        int matriz[levelEasy.size][levelEasy.size];
        llenar_Matriz(levelEasy.size,matriz);// esta parte llamo a la funcion
        printf("\nLa matriz es la siguiente \n");
        mostrar_matriz(levelEasy.size,matriz);// esta parte llamo a la funcion para que me muestre la matriz
    };

    
    if(dim == 2){
        int matriz[levelIntermediate.size][levelIntermediate.size];
        llenar_Matriz(levelIntermediate.size,matriz);// esta parte llamo a la funcion
        printf("\nLa matriz es la siguiente \n");
        mostrar_matriz(levelIntermediate.size,matriz);// esta parte llamo a la funcion para que me muestre la matriz
    };

    if(dim == 3){
        int matriz[levelHard.size][levelHard.size];
        llenar_Matriz(levelHard.size,matriz);// esta parte llamo a la funcion
        printf("\nLa matriz A es la siguiente \n");
        mostrar_matriz(levelHard.size,matriz);// esta parte llamo a la funcion para que me muestre la matriz
    };

 return 0;
}




// esta funcion muestra la matriz generada
void mostrar_matriz(int dim, int matriz[dim][dim]){
 for(int i=0;i<dim;i++){
  for(int j=0;j<dim;j++){
   printf("%d\t",matriz[i][j]);
  }
  printf("\n");
 }
}


// esta funcion para llenar la matriz al azar la cual usaremos por el momento para pruebas
void llenar_Matriz(int dim, int matriz[dim][dim]){
 for(int i=0;i<dim;i++){
  for(int j=0;j<dim;j++){
    matriz[i][j]= 0;
  }
 }
}
