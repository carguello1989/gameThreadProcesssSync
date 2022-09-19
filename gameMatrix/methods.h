// esta funcion muestra la matriz generada
void showMatrix(int dim, int matriz[dim][dim]){
 for(int i=0;i<dim;i++){
  for(int j=0;j<dim;j++){
   printf("%d\t",matriz[i][j]);
  }
  printf("\n");
 }
}


// esta funcion para llenar la matriz al azar la cual usaremos por el momento para pruebas
void fillMatrix(int dim, int matriz[dim][dim]){
 for(int i=0;i<dim;i++){
  for(int j=0;j<dim;j++){
    matriz[i][j]= 0;
  }
 }
}

void doOperation(int dim, int matriz[dim][dim]){
  fillMatrix(dim,matriz);// esta parte llamo a la funcion
  cuartos(dim,matriz);
  printf("\nLa matriz es la siguiente \n");
  showMatrix(dim,matriz);// esta parte llamo a la funcion para que me muestre la matriz
}

int getNumberMonters(int dim){
  return dim/2;
}

// Se llena la matriz con la N cantidad de cuartos que estan representados con 1
void cuartos(int dim, int matriz[dim][dim]){

   int i,fila,columna,inicio,fin;
   int contador = 0;
   fila = rand()%dim;
   columna = rand()%dim;
   inicio = matriz[fila][columna];
   matriz[fila][columna] = 1;
   fila = rand()%dim;
   columna = rand()%dim;
   fin = matriz[fila][columna];
   matriz[fila][columna] = 1;

   for(i= 0;i<dim-2;i++){
      fila = rand()%dim;
      columna = rand()%dim;

      if(matriz[fila][columna] == 0){   
         matriz[fila][columna] = 1;
         contador = contador+1;

   }
      else{
         i = i-1;
      }

   }
}

void printMenu(){
  printf("Presione 1 para nivel facil:");
  printf("\n");

  printf("Presione 2 para nivel normal:");
  printf("\n");

  printf("Presione 3 para nivel dificil: ");
  printf("\n");
  printf("\n");

  printf("Ingrese el nivel que desea jugar: ");
}
