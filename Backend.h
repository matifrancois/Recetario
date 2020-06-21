#pragma once
#include <string>
#include "sqlite3.h" 

using namespace std;

class Backend
{
public:
	Backend();
	~Backend();
	void SetNuevaReceta(string Nombre, string Ingredientes, string Pasos, string Costo);
	bool getTodoOk(void);
private:
	int ID;
	string Error;
	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	const char* sql;
	bool TodoOk;
};



