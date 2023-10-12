#pragma once
#include "persona.h"

//accede a persona, alumno es hijo del persona
class alumno: public Persona 
{
private:
    string carrera;
    int semestre;

public:
    alumno();
    alumno(string);
    ~alumno();
    void Saludo();
    void SetCarrera(string);
    void SetSemestre(int);
    string GetCarrera(string);
    int GetSemestre(int);
    
};
