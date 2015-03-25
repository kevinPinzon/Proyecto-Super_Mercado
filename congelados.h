#ifndef CONGELADOS
#define CONGELADOS

#include "alimentos.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Congelados: public Alimentos{
public:
    Congelados(string nombre, double precioNeto, string caducidad, int cantidad,string color) : Alimentos(nombre, precioNeto, caducidad, cantidad, color){}

    Congelados(const Congelados& other): Alimentos(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Congelados: "<< Alimentos::toString();
        return ss.str();
    }
    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.12);
    }
};

#endif // CONGELADOS
