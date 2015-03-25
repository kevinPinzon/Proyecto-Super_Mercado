#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

class Productos{

    string nombre;
    double precioNeto;/* PRECIO SIN EL ISV*/
    string caducidad;
    int cantidad;


protected:

    void setNombre(string nombre){
        this->nombre=nombre;
    }

    void setPrecioNeto(double precioNeto){
        this->precioNeto=precioNeto;
    }

    void setCantidad(int cantidad){
        this->cantidad=cantidad;
    }

    void setCaducidad(string caducidad){
        this->caducidad=caducidad;
    }

public:
    Productos(string nombre,double precioNeto ,string caducidad ,int cantidad){
        this->nombre=nombre;
        this->precioNeto=precioNeto;
        this->caducidad=caducidad;
        this->cantidad=cantidad;
    }
    Productos(const Productos& other):
        nombre(other.nombre), precioNeto(other.precioNeto), caducidad(other.caducidad), cantidad(other.cantidad){
    }
    ~Productos(){}

    virtual string toString()const{
        stringstream ss;
        ss<<"Producto: "<<nombre<<" con precio por unidad: "<<this->precio();
        return ss.str();
    }

    virtual double precio()const=0;

    string getNombre()const{
        return nombre;
    }
    double getPrecioNeto()const{
        return precioNeto;
    }

    int getCantidad()const{
        return cantidad;
    }

    string getCaducidad()const{
        return caducidad;
    }


};
#endif // PRODUCTOS_H
