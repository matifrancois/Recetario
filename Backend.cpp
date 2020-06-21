#include "Backend.h"

static int callback_ID(void* ID, int argc, char** argv, char** azColName) {
    if (argv[0] != NULL)
    {
        string IdString = argv[0];
        *(int*)ID = stoi(IdString);
    }
    else
    {
        *(int*)ID = 0;
    }
    return 0;
}

static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

Backend::Backend()
{
    ID = 0;
    rc = sqlite3_open("BaseDeDatos.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        TodoOk = false;
    }
    else {
        fprintf(stdout, "Opened database successfully\n");
        TodoOk = true;
    }
    /* Create SQL statement */
    sql = "CREATE TABLE RECETARIO("  \
        "ID            INT PRIMARY KEY     NOT NULL," \
        "NOMBRE        CHAR(50)    NOT NULL," \
        "INGREDIENTES  TEXT," \
        "PASOS         TEXT," \
        "COSTO         REAL );";

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else {
        fprintf(stdout, "Table created successfully\n");
    }

    /* Create SQL statement */
    sql = "SELECT  MAX(ID) FROM  RECETARIO;";

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql, callback_ID, (void*)&ID, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else {
        fprintf(stdout, "Operation done successfully\n");
    }
}

Backend::~Backend()
{
    sqlite3_close(db);
}



void Backend::SetNuevaReceta(string Nombre, string Ingredientes, string Pasos, string Costo)
{
    ID = ID + 1;
    string estilo = "INSERT INTO RECETARIO (ID,NOMBRE,INGREDIENTES,PASOS,COSTO) VALUES (" + to_string(ID) + ", '" + Nombre + "', '" + Ingredientes + "', '" + Pasos + "', " + Costo + " ); ";
    sql = estilo.c_str();
    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else {
        fprintf(stdout, "Records created successfully\n");
    }
}


bool Backend::getTodoOk(void)
{
    return TodoOk;
}

