#include "FuncionesCC.h"
#include <stdio.h>

int main(){
	
   local_t matriz[8][5];
    int tamano[8] = {};
    int opcion=0;
    do{
        opcion = menu();
        
        switch (opcion)
        {
        case 1:
            disponibilidadLocal(matriz, tamano);
            break;

        case 2:
            anadirUsuario(matriz, tamano);
            break;

        case 3: ;
            int aniosAper;    
	    int recursion;
     	    int piso;
    	    printf("Piso ");
   	    scanf("%d", &piso);
  	    recursion=tamano[piso-1];
            aniosAper=sumarAnios(matriz, recursion,piso);
            printf("El total de Anios de Apertura para locales del piso es: %d", aniosAper);
            break;

        case 4:
            buscarOficinas(matriz, tamano);
            break;
	
	case 5:
            cambiarNombre(matriz, tamano);
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
