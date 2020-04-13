#include "FuncionesCC.h"
#include <stdio.h>

int main(){
	
	int fila, col;
	printf("Ingrese el numero de pisos del centro comercial: ");
	scanf("%d", &fila);
	printf("Ingrese el numero de locales por piso del centro comercial: ");
	scanf("%d", &col);
	
	int tamano[fila];
	local_t** matriz = iniciarMatriz(fila, col, tamano);
	
	
	int opcion=0;
   
do{
        opcion = menu();
        
        switch (opcion)
        {
        case 1:
            disponibilidadLocal(matriz, tamano,fila,col);
            break;

        case 2:
            anadirUsuario(matriz, tamano,col);
            break;

        case 3: ;
            int aniosAper;    
	    int recursion;
     	    int piso;
    	    printf("Piso ");
   	    scanf("%d", &piso);
  	    recursion=tamano[piso-1];
            aniosAper=sumarAnios(matriz, recursion,piso,col);
            printf("El total de Anios de Apertura para locales del piso es: %d", aniosAper);
            break;

        case 4:
            buscarOficinas(matriz, tamano,fila,col);
            break;
	
	case 5:
            cambiarNombre(matriz, tamano,col);
            break;
			
	case 6:
            vaciarLocal(matriz, tamano);
            break;
			
        default:
            printf("Opcion no Disponible\n");
            break;
        }
    } while (opcion != 0);

return 0;
}
