#pragma once
#include <iostream>
#include <string>

using namespace std;

class Persona
{

public:
    Persona();
    ~Persona();
    void Saludo();
    void SetNombre(string);
    void SetEdad(int);
    void SetGenero(string);
    string GetNombre(string);
    int GetEdad(int);
    string GetGenero(string);

protected:
    string nombre;

private:
    int edad;
    string genero;
};
