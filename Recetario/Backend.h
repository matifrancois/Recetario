#pragma once
#include <string>
#include <vector> 
#include "sqlite3.h" 

using namespace std;

typedef struct Resetas {
	char nombre[50];
	string ingredientes;
	string pasos;
	float costo;
} Receta;

class Backend
{
public:
	Backend();
	~Backend();
	void SetNuevaReceta(string Nombre, string Ingredientes, string Pasos, string Costo);
	bool getTodoOk(void);
	Receta getReceta(int id);
	int getID(void);
	vector<string>buscarPorCosto(string costo_a_buscar);
	vector<string> nombres;
private:
	int ID;
	string Error;
	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	const char* sql;
	bool TodoOk;
};



