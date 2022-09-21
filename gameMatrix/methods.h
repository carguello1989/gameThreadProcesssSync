

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

void createInitialRoom(int** p){
  int x = rand() % 10;
  int y = rand() % 10;
  p[x][y] = 1;
}


int **createRoom(int** p , int N , int M, int sizeMatrix){
  for(i=0;sizeMatrix>=i;++i){ 
   printf("Fila %d",N);
   printf("Columna %d",M);
   printf("\n");
    if (p[N][M] == 1){
      printf("repetido");
      printf("\n");
      
    }
    

    /// Validacion de Esquinas ///
    //Esquina superior izquierda
    if((N==0) && (M==0)){
      int Aleatorio =  rand()%2;
      if(Aleatorio == 0){
        p[N][M] = 1;
        N = 0; M = 1;
      }
      else{
        p[N][M] = 1;
        N = 1; M = 0;
      }
    }
    //Esquina inferior izquierda
    else if((N ==sizeMatrix-1) && (M == 0)){
      int Aleatorio =  rand()%2;
      if(Aleatorio == 0){
        p[N][M] = 1;
        N = sizeMatrix-2; M = 0;
      }
      else{
        p[N][M] = 1;
        N = sizeMatrix-1; M = 1;
      }
    }
    //Esquina superior derecha
    else if((N==0) && (M==sizeMatrix-1)){
      int Aleatorio =  rand()%2;
      if(Aleatorio == 0){
        p[N][M] = 1;
        N = 0; M = sizeMatrix-2;
      }
      else{
        p[N][M] = 1;
        N = 1; M = sizeMatrix-1;
      }
    }
    //Esquina inferior derecha
    else if((N==sizeMatrix-1) && (M==sizeMatrix-1)){
      int Aleatorio =  rand()%2;
      if(Aleatorio == 0){
        p[N][M] = 1;
        N = sizeMatrix-2; M = sizeMatrix-1;
      }
      else{
        p[N][M] = 1;
        N = sizeMatrix-1; M = sizeMatrix-2;
      }
    }

    /// Validacion de Bordes ///
    /// Borde Izquierdo
    else if((N >0 || N < sizeMatrix-1 ) && (M==0)){
      int Aleatorio =  rand()%3;
      if(Aleatorio == 0){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N-1; M = M;

         }
      }
      else if(Aleatorio ==1){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N; M = M+1;
         }
      }
      else{
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N+1; M = M;
         }  
      }
    }
    /// Borde Derecho
    else if((N>0 || N < sizeMatrix-1) && (M ==sizeMatrix-1)){
      int Aleatorio =  rand()%3;
      if(Aleatorio == 0){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N-1; M = M;
         }  
      }
      else if(Aleatorio ==1){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N; M = M-1;
         }
      }
      else{
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N+1; M = M;
         }   
      }
    }
    /// Borde Arriba
    else if((N==0) && (M>0 || M < sizeMatrix-1)){
      int Aleatorio =  rand()%3;
      if(Aleatorio == 0){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N; M = M-1;
         }  
      }
      else if(Aleatorio ==1){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N; M = M+1;
         }
      }
      else{
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N+1; M = M;
         }
      }
    }
    /// Borde Abajo
    else if((N==sizeMatrix-1) && (M>0 || M < sizeMatrix-1)){
      int Aleatorio =  rand()%3;
      if(Aleatorio == 0){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N; M = M-1;
         }
      }
      else if(Aleatorio ==1){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N; M = M+1;
         }
      }
      else{
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N-1; M = M;
         }
      }
    }
    /// Validacion de todo el centro de la matriz
    else{
      int Aleatorio =  rand()%4;
      if(Aleatorio == 0){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N; M = M-1;
         }
      }
      else if(Aleatorio ==1){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N; M = M+1;
         }
      }
      else if(Aleatorio ==2){
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N+1; M = M;
         }
      }
      else{
         if(p[N][M] == 1){
            i = i-1;
         }
         else{
            p[N][M] = 1;
            N = N-1; M = M;
         }
      }

    }
  }
}


void freeArray(int** p, int N) {
    int i;
    for(i = 0 ; i < N ; i++)
        free(p[i]);
    free(p);
}
