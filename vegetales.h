#ifndef VEGETALES_H
#define VEGETALES_H

#include "alimentos.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class vegetales: public Alimentos{
public:
    vegetales(string nombre, double precioNeto, string caducidad, int cantidad, string color):Alimentos(nombre, precioNeto, caducidad, cantidad, color){}

    vegetales(const vegetales& other): Alimentos(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Vegetal: "<< Alimentos::toString();
        return ss.str();
    }
    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.10);
    }

};
#endif // VEGETALES_H
