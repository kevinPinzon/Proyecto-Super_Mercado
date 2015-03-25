#ifndef ALCOHOL
#define ALCOHOL

#include "bebidas.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Alcohol: public Bebidas{

public:

    Alcohol(string nombre, double precioNeto, string caducidad, int cantidad,string marca):Bebidas(nombre, precioNeto, caducidad, cantidad,marca){}

    Alcohol(const Alcohol& other): Bebidas(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Alcohol: "<< Bebidas::toString();
        return ss.str();
    }

    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.15);
    }

};
#endif // ALCOHOL

