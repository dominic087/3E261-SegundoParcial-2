#pragma once 
#include <EstadoFoco.hpp>
class Foco
{
private:
 EstadoFoco encendido;
public: 
    Foco () {
     this->encendido = "-";
      }
    Foco () {
    void Encender() {
        this->encendido = "+";
    }
    }
    void Apagado(){
        this->encendido = "-";
    }
 EstadoFoco LeerEstado(){
    return this->encendido;
 }
};