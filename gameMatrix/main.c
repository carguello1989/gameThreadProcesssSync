#include<stdio.h>
#include<time.h>
#include<stdlib.h>



void llenar_Matriz(int dim, int matriz[dim][dim]);
void mostrar_matriz(int dim, int matriz[dim][dim]);

int main(){
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
    int matriz[10][10];
    llenar_Matriz(10,matriz);// esta parte llamo a la funcion
    printf("\nLa matriz es la siguiente \n");
    mostrar_matriz(10,matriz);// esta parte llamo a la funcion para que me muestre la matriz
 };

 
 if(dim == 2){
    int matriz[20][20];
    llenar_Matriz(20,matriz);// esta parte llamo a la funcion
    printf("\nLa matriz es la siguiente \n");
    mostrar_matriz(20,matriz);// esta parte llamo a la funcion para que me muestre la matriz
 };

 if(dim == 3){
    int matriz[30][30];
    llenar_Matriz(30,matriz);// esta parte llamo a la funcion
    printf("\nLa matriz A es la siguiente \n");
    mostrar_matriz(30,matriz);// esta parte llamo a la funcion para que me muestre la matriz
 };



 
 return 0;
}




// esta funcion muestra la matriz generada
void mostrar_matriz(int dim, int matriz[dim][dim]){
 int i,j;
 for(i=0;i<dim;i++){
  for(j=0;j<dim;j++){
   printf("%d\t",matriz[i][j]);
  }
  printf("\n");
 }
}


// esta funcion para llenar la matriz al azar la cual usaremos por el momento para pruebas
void llenar_Matriz(int dim, int matriz[dim][dim]){
 int i,j;
 for(i=0;i<dim;i++){
  for(j=0;j<dim;j++){
    matriz[i][j]= 0;
  }
 }
}
