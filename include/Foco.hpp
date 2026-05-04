#pragma once 
#include <EstadoFoco.hpp>
class Foco
{
private:
 EstadoFoco encendido;
public: 
    foco() {
     this->encendido = "-";
      }
    }
    ~foco() {}
    void Encender(){
        this->encendido = "+";
    }
    void Apagado(){
        this->encendido = "-";
    }
 EstadoFoco LeerEstado(){
    return this->encendido;
 }
};