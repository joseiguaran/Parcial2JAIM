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

void disponibilidadLocal(matriz, tamano)
{
    printf("El Centro Comercial cuenta con 8 pisos con locales \n");
    for (i = 0; i <8; i=i+1)
    {
	printf("En el piso %d se encuentran %d locales vacios\n",(i+1),(5-tamano[i]));
    }
}    

void anadirUsuario(local_t matriz[][5], int tamano[])
{
    	int idLocal; 
	int pisoLocal;
	int numLocalxPiso;
  	char nombre[35];

    printf("Piso del Local ");
    scanf("%d", &pisoLocal);
    
    printf("Numero del Local");
    scanf("%d", &numLocalxPiso);
    
    if (matriz[pisoLocal-1][numLocalxPiso-1]=0)
    {
        printf("Nombre ");
        scanf("%s", &nombre);
	    
	idLocal=1000+(pisoLocal*10)+(numLocalxPiso)

        printf("Tipo de Local:\n 0-Almacen\n 1-Oficina\n");
        int tipo;
        scanf("%d", &tipo);
    
           if (tipo = 0)
           {
             tipo_e tip = ALMACEN
           }
           else  
              tipo_e tip = OFICINA
   
        local_t l;
        strcpy(l.nombre, nombre);
        strcpy(l.pisoLocal, pisoLocal);
        strcpy(l.numLocalxPiso, numLocalxPiso);
	strcpy(l.idLocal, idLocal);
        strcpy(l.tipoLocal, tip);
        matriz[pisoLocal - 1][numLocalxPiso-1] = l;
        tamano[pisoLocal - 1]= tamano[pisoLocal - 1]+1;
    }
    else
        printf("El Local seleccionado ya se encuentra ocupado");
        anadirUsuario(local_t matriz[][5], int tamano[]);
}

int sumarAnios (local_t matriz[][5], int tamano[]){
    int recursion;
    int anios=0;
    int piso;
    printf("Piso ");
    scanf("%d", &piso);
    recursion=tamano[piso-1];
    if (recursion<0){
        return 0;
            
    }else
        
        if (matriz[piso-1][recursion].anioApertura>0){
             anios=2020- matriz[piso-1][recursion].anioApertura;
             return anios + sumarAnios(local_t matriz[][5], recursion-1);
             }

}
