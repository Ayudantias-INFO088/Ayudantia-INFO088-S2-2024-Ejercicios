#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>
using namespace std;	// uso del espacio de nombre std

#define N 30		// cantidad de puntos a crear
#define Q 50		// debe crear puntos flotantes en el rango [-Q, Q]
#define REP 30		// Repeticiones

void genPoints(float X[N], float Y[N]);
float euclideanDistance(float X[N], float Y[N], int u, int v);
int manhattanDistance(float X[N], float Y[N], int u, int v);
float porcentajeDiferencia(float X[N], float Y[N]);
void centroide(float X[N], float Y[N]);

int main(){
	
	float *X = new float[N];
	float *Y = new float[N];
	genPoints(X, Y);

	for (int i = 0; i < N; ++i){
		printf("(%f, %f)\n", X[i], Y[i]);
	}

	float porcentaje = porcentajeDiferencia(X, Y);
	printf("El porcentaje es %f", porcentaje);

	return EXIT_SUCCESS;
}

void genPoints(float X[N], float Y[N]){
	for (int i = 0; i < N; ++i){
				// Parte entera			// Parte Flotante
		X[i] = rand() % (Q - -Q) + -Q + rand()/(float)RAND_MAX;
		Y[i] = rand() % (Q - -Q) + -Q + rand()/(float)RAND_MAX ;
	}
}


float porcentajeDiferencia(float X[N], float Y[N]){
	int u, v;
	float euclidean, manhattan;
	float promPorcentaje = 0;
	for (int i = 0; i < REP; ++i){
		u = rand()%N;
		v = rand()%N;
		euclidean = euclideanDistance(X, Y, u, v);
		manhattan = manhattanDistance(X, Y, u ,v);
		promPorcentaje += (manhattan - euclidean) / euclidean;
	}

	return promPorcentaje/REP;
}

float euclideanDistance(float X[N], float Y[N], int u, int v){
	return sqrt(pow(X[u]-X[v], 2) + pow(Y[u] + Y[v], 2));
}

int manhattanDistance(float X[N], float Y[N], int u, int v){
	return abs(X[u] - X[v]) + abs(Y[u] - Y[v]);
}

/*
SI DESEA PROFUNDIZAR, RESUELVA:
===============================

Cree el procedimiento void losMasCercanos(float X[N], float Y[N], int q, int *p_manh, int *p_real)
que encuentra, utilizando la distancia de Manhattan, cuales son los indices p_manh y p_eucl de los 
puntos más cercanos a (X[q],Y[q]), según la distancia euclideana y de manhattan respectivamente.
*/

// calcula e imprime el centroide correspondientes a los N puntos
void centroide(float X[N], float Y[N]){

}
