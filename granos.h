#ifndef GRANOS
#define GRANOS

#include "alimentos.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Granos: public Alimentos{
public:
    Granos(string nombre, double precioNeto, string caducidad, int cantidad,string color) : Alimentos(nombre, precioNeto, caducidad, cantidad, color){}

    Granos(const Granos& other): Alimentos(other){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Granos: "<< Alimentos::toString();
        return ss.str();
    }
    virtual double precio()const{
        return getPrecioNeto()+(getPrecioNeto()*0.06);
    }
};

#endif // GRANOS
