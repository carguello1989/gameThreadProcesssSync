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
  printf("\nLa matriz es la siguiente \n");
  showMatrix(dim,matriz);// esta parte llamo a la funcion para que me muestre la matriz
}

int getNumberMonters(int dim){
  return dim/2;
}