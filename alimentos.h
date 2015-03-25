#ifndef ALIMENTOS
#define ALIMENTOS

#include "productos.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;


class Alimentos: public Productos{


protected:
    string color;

public:
    Alimentos(string nombre, double precioNeto, string caducidad, int cantidad,string color):Productos(nombre, precioNeto, caducidad, cantidad){
    this->color=color;
    }

    Alimentos(const Alimentos& other): Productos(other){
    }

    ~Alimentos(){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Alimento: "<< Productos::toString();
        return ss.str();
    }

    string getColor()const{
        return color;
    }

    void setColor(string color){
        this->color=color;
    }


};
#endif // ALIMENTOS

