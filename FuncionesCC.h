
#ifndef FUNCIONESCC_H_
#define FUNCIONESCC_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum tipoLocal{
    ALMACEN, OFICINA
} tipo_e ;

//Local 
typedef struct Local{
	char nombreLocal[35];
	int idLocal; // Calculado automaticamente por su programa
	int pisoLocal;
	int numLocalxPiso;//Columnas
	int anioApertura;
	tipo_e tipoLocal;
	// Completelo con lo que quiera
} local_t;


/*Agregar las funciones que necesite para satisfacer los requerimientos */
void mostrarLocal(local_t ** centroComercial, int numPiso,
		int numLocalxPiso, int numPisos, int numLocalesxPiso);



int menu();
local_t** iniciarMatriz(int fila, int col, tamano[]);
void disponibilidadLocal(local_t **matriz, int tamano[], int fila, int col);
void anadirUsuario(local_t **matriz, int tamano[], int col);
int sumarAnios (local_t **matriz, int recursion, int piso, int col);
void buscarOficinas(local_t **matriz, int tamano[], int fila, int col);
void  cambiarNombre(local_t **matriz, int tamano[], int col);
void   vaciarLocal(local_t **matriz, int tamano[]);

#endif /* FUNCIONESCC_H_ */
