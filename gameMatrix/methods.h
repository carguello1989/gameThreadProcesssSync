

int getNumberMonters(int dim){
  return dim/2;
}

// Se llena la matriz con la N cantidad de cuartos que estan representados con 1
void getRoom(int dim, int matriz[dim][dim]){

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



// We return the pointer
int **get(int N, int M) /* Allocate the array */
{
    /* Check if allocation succeeded. (check for NULL pointer) */
    int i, **array;
    array = malloc(N*sizeof(int *));
    for(i = 0 ; i < N ; i++)
        array[i] = malloc( M*sizeof(int) );
    return array;
}

// We don't return the pointer
void getNoReturn(int*** array, int N, int M) {
    /* Check if allocation succeeded. (check for NULL pointer) */
    int i;
    *array = malloc(N*sizeof(int *));
    for(i = 0 ; i < N ; i++)
        (*array)[i] = malloc( M*sizeof(int) );
}

void fill(int** p, int N, int M) {
    int i, j;
    for(i = 0 ; i < N ; i++)
        for(j = 0 ; j < M ; j++)
            p[i][j] = j;
}

void fillZero(int** p, int N, int M) {
    int i, j;
    for(i = 0 ; i < N ; i++)
        for(j = 0 ; j < M ; j++)
            p[i][j] = 0;
}

void print(int** p, int N, int M) {
    int i, j;
    for(i = 0 ; i < N ; i++)
        for(j = 0 ; j < M ; j++)
            printf("array[%d][%d] = %d\n", i, j, p[i][j]);
}

void printMatrixStyle(int** p, int N, int M) {
    int i, j;
    for(i = 0 ; i < N ; i++){
      for(j = 0 ; j < M ; j++){
        printf("%d", *(*(p + i) + j));
      } 
      printf("\n");   
    }    
}


void freeArray(int** p, int N) {
    int i;
    for(i = 0 ; i < N ; i++)
        free(p[i]);
    free(p);
}