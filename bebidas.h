#ifndef BEBIDAS
#define BEBIDAS

#include "productos.h"

#include <sstream>
#include <string>

using std::stringstream;
using std::string;

class Bebidas: public Productos{
    string marca;

public:
    Bebidas(string nombre, double precioNeto, string caducidad, int cantidad,string marca): Productos(nombre, precioNeto, caducidad, cantidad){
    this->marca=marca;
    }

    Bebidas(const Bebidas& other):Productos(other){}

    ~Bebidas(){};

    virtual string toString()const{
        stringstream ss;
        ss<<"Bebidas: "<< Productos::toString();
        return ss.str();
    }

    string getMarca()const{
        return marca;
    }
    void setMarca(string marca){
        this->marca=marca;
    }
};


#endif // BEBIDAS

