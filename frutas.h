#ifndef FRUTAS_H
#define FRUTAS_H

#include "alimentos.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Frutas: public Alimentos{

public:
    Frutas(string nombre, double precioNeto, string caducidad, int cantidad, string color) :
        Alimentos(nombre, precioNeto, caducidad, cantidad, color){}

    Frutas(const Frutas& other): Alimentos(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Fruta: "<< Alimentos::toString();
        return ss.str();
    }

    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.08);
    }
};
#endif // FRUTAS_H

