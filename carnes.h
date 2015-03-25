#ifndef CARNES
#define CARNES

#include "alimentos.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Carnes: public Alimentos{
public:
    Carnes(string nombre, double precioNeto, string caducidad, int cantidad,string color) : Alimentos(nombre, precioNeto, caducidad, cantidad, color){}

    Carnes(const Carnes& other): Alimentos(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Carnes: "<< Alimentos::toString();
        return ss.str();
    }
    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.10);
    }
};

#endif // CARNES
