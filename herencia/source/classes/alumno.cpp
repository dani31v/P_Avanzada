#include "alumno.h"

alumno::alumno(): Persona()
{
    carrera = "";
    semestre = 0;
}

alumno::alumno(string n) : Persona(n)
{
    carrera = "";
    semestre = 0;
}

alumno::~alumno()
{
}

void alumno::Saludo()
{

}

void alumno::SetCarrera(string c )
{
    carrera = c
}

void alumno::SetSemestre(int s)
{
    semestre = s 
}

string alumno::GetCarrera(string)
{
    return carrera;
}

int alumno::GetSemestre(int)
{
    return semestre;
}
