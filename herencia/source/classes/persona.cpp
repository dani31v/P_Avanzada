#include "persona.h"

Persona::Persona(string n)
{
    nombre = "";
    edad = 0;
    genero = "";
}

Persona::Persona()
{
}

Persona::~Persona()
{
}

void Persona::Saludo()
{
    cout << " Hola soy "
        << nombre
        <<", tengo "
        << edad
        << " y soy "
        << genero
        << endl;
}

void Persona::SetNombre(string n)
{
    nombre = n;
}

void Persona::SetEdad(int e)
{
    edad = e;
}

void Persona::SetGenero(string g)
{
    genero = g
}


string Persona::GetNombre(string)
{
    return nombre;
}

int Persona::GetEdad(int)
{
    return edad;
}

string Persona::GetGenero(string)
{
    return genero;
}
