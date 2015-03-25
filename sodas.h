#ifndef SODAS
#define SODAS

#include "bebidas.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Sodas: public Bebidas{

public:

    Sodas(string nombre, double precioNeto, string caducidad, int cantidad,string marca):Bebidas(nombre, precioNeto, caducidad, cantidad,marca){}

    Sodas(const Sodas& other): Bebidas(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Soda: "<< Bebidas::toString();
        return ss.str();
    }

    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.10);
    }

};
#endif // SODAS

