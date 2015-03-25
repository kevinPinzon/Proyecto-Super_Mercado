#ifndef JUGOS
#define JUGOS

#include "bebidas.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Jugos: public Bebidas{

public:

    Jugos(string nombre, double precioNeto, string caducidad, int cantidad,string marca):Bebidas(nombre, precioNeto, caducidad, cantidad,marca){}

    Jugos(const Jugos& other): Bebidas(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Jugo: "<< Bebidas::toString();
        return ss.str();
    }
    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.12);
    }
};
#endif // JUGOS

