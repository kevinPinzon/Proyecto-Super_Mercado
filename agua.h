#ifndef AGUA
#define AGUA

#include "bebidas.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Agua: public Bebidas{

public:

    Agua(string nombre, double precioNeto, string caducidad, int cantidad,string marca):Bebidas(nombre, precioNeto, caducidad, cantidad,marca){}

    Agua(const Agua& other): Bebidas(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Agua: "<< Bebidas::toString();
        return ss.str();
    }
    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.05);
    }
};
#endif // AGUA
