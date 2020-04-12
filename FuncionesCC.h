
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
void disponibilidadLocal(local_t matriz[][5], int tamano[]);
void anadirUsuario(local_t matriz[][5], int tamano[]);
int sumarAnios (local_t matriz[][5], int recursion, int piso);
void buscarOficinas(local_t matriz[][5], int tamano[]);
void  cambiarNombre(local_t matriz[][5], int tamano[]);
void   vaciarLocal(local_t matriz[][5], int tamano[]);

#endif /* FUNCIONESCC_H_ */
