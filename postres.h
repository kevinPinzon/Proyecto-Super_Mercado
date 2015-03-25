#ifndef POSTRES
#define POSTRES

#include "alimentos.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Postres: public Alimentos{
public:
    Postres(string nombre, double precioNeto, string caducidad, int cantidad,string color) : Alimentos(nombre, precioNeto, caducidad, cantidad, color){}

    Postres(const Postres& other): Alimentos(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Postres: "<< Alimentos::toString();
        return ss.str();
    }
    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.12);
    }
};

#endif // POSTRES
