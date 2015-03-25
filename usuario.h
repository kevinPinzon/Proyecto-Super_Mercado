#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class usuario
{
    string nombre;
    string contrasena;
public:
    usuario(string nombre, string contrasena){
        this->nombre=nombre;
        this->contrasena=contrasena;
    }
    ~usuario(){}

    string getNombre(){return nombre;}

    string getContrasena(){return contrasena;}

    virtual string toString()const{
        stringstream ss;
        ss<<"nombre de usuario: "<<nombre;
        return ss.str();
    }

    int confirmarContra(string confi){
        if(contrasena==confi)
            return 0;
        else
            return -1;
    }
};
#endif // USUARIO_H

