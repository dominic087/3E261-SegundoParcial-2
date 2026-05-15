#pragma once 
#include<Foco.hpp>
class SerieFocos
{
private:
 Foco focos[10]
public:
SerieFocos();  {}
SerieFocos(); {}
 void MostarFocos() {
    for (auto &&f : focos)
    {
        std::cout<<f.LeerEstado();
    }
    std::cout << std:: endl; 

 }
 void EncenderFocos(){
    for ( auto &&f : focos)
    {
        f.Encender();
    }
 }
 void ApagarFoco(){
    for(auto &&f : focos){
        f.Encender();
    }
};
}