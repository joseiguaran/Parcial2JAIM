#include "FuncionesCC.h"

int menu()
{
    int opcion;
    printf("BIENVENIDO AL SISTEMA DE LOCALES \n");
    printf("Seleccione la opcion \n");
    printf("1: Numero de locales disponibles\n");
    printf("2: Anadir Local\n");
    printf("3: Suma de Anios de Apertura por Piso\n");
    printf("4: Locales por Tipo (Almacen u Oficina)\n");
    printf("5: Cambiar Nombre del Almacen (Almacen u Oficina)\n");
    printf("6: Vaciar Local (Almacen u Oficina)\n");
    printf("0: Salir\n");
    scanf("%d", &opcion);
    return opcion;
}		
local_t** iniciarMatriz(int fila, int col, tamano[])
{
    local_t** matriz = malloc(sizeof(local_t*) * fila);
    int i;
    int j;
    int h;
    for(i = 0; i < fila; i=i+1)
    {
        matriz[i] = malloc(sizeof(local_t) * col);
        for (j = 0; j < col; j=j+1)
            matriz[i][j].anioApertura = 0;
	    matriz[i][j].tipoLocal = 0;
    }
	for(h=0;h<fila;h++)
		tamano[h]=0;
    return matriz;
}

void disponibilidadLocal(local_t **matriz, int tamano[], int fila, int col)
{
    int i;
    for (i = 0; i <fila; i=i+1)
    {
	printf("En el piso %d se encuentran %d locales vacios\n",(i+1),(col-tamano[i]));
    }
}    

void anadirUsuario(local_t **matriz, int tamano[], int col)
{
    	int idLocal; 
	int pisoLocal;
	int anioApertura;
	int numLocalxPiso;
  

    printf("Piso del Local ");
    scanf("%d", &pisoLocal);
    
    printf("Numero del Local");
    scanf("%d", &numLocalxPiso);
    
    if ((matriz[pisoLocal-1][numLocalxPiso-1].anioApertura)==0)
    {
	    
	printf("Anio de Apertura ");
        scanf("%s", &anioApertura);
	     
        local_t l;
        printf("Nombre ");
	scanf("%35s",matriz[pisoLocal - 1][numLocalxPiso-1].nombreLocal);
        l.pisoLocal=pisoLocal;
        l.numLocalxPiso=numLocalxPiso;
	    printf("Tipo de Local:\n 1-Almacen\n 2-Oficina\n");
        int tipo;
        scanf("%d", &tipo);
    
           if (tipo = 1){
            l.tipoLocal= ALMACEN;
                        }
           if (tipo=2) {  
              l.tipoLocal= OFICINA;
	        }
	l.anioApertura=anioApertura; 
	l.idLocal=1000+(pisoLocal*10)+(numLocalxPiso);
        matriz[pisoLocal - 1][numLocalxPiso-1] = l;
        tamano[pisoLocal - 1]= tamano[pisoLocal - 1]+1;
    }
    else{
        printf("El Local seleccionado ya se encuentra ocupado\n");
	    printf("%d\n",matriz[pisoLocal][numLocalxPiso].anioApertura);
        anadirUsuario(matriz, tamano, col);
        }
}

int sumarAnios (local_t **matriz, int recursion, int piso, int col)
{
    int anios=0;
    if (recursion<0)
    {
        return 0;
            
    }else
        
        if (matriz[piso-1][recursion].anioApertura>0)
	     {
             anios=2020- matriz[piso-1][recursion].anioApertura;
             return anios + sumarAnios(matriz, recursion-1,piso, col);
             }

}

void buscarOficinas(local_t **matriz, int tamano[], int fila, int col)
{
    printf("Ingrese el Tipo a Buscar:\n 1-Almacen\n 2-Oficina\n");
    int tipo;
 
    scanf("%d", &tipo);
   
	 
    int i;
    int j;
    for (i = 0; i <fila; i=i+1)
    {
        for (j = 0; j < tamano[i]; j=j+1)
	{   
        local_t l = matriz[i][j];
            if (l.tipoLocal == tipo)
	    {
                printf("Nombre del Local: %s\n ID del local: %d\n Piso del Local: %d\n Numero del Local: %d\n Anio de Apertura: %d\n", l.nombreLocal, l.idLocal, l.pisoLocal, l.numLocalxPiso,l.anioApertura );
            }
        }
    }
}

void  cambiarNombre(local_t **matriz, int tamano[], int col)
{
        int piso;
	int numeroLocal;
	char nombre[35];
        printf("Ingrese el piso del local a cambiar\n");
	scanf("%d", &piso);
	printf("Ingrese el numero del local a cambiar\n");
	scanf("%d", &numeroLocal);
	printf("Ingrese el nuevo nombre\n");
	scanf("%s",matriz[piso - 1][numeroLocal-1].nombreLocal);

}
void   vaciarLocal(local_t **matriz, int tamano[])
{
}
