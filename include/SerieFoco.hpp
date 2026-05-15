#pragma once
#include <iostream>
#include "Foco.hpp"

class SerieFocos
{
private:
    Foco foco[10];

public:
    SerieFocos(){}

    void MostrarFocos() {
        for (auto &&f : foco)
        {
            std::cout << f.LeerEstado();
        }
        std::cout << std::endl;
    }

    void EncenderFocos() {
        for (auto &&f : foco)
        {
            f.Encender();
        }
    }

    void ApagarFocos() {
        for (auto &&f : foco)
        {
            f.Apagar();
        }
    }
};