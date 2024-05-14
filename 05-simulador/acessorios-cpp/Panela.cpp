#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Panela.hpp"

Panela::Panela(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Panela::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Panela::getResistencia() 
{
    return this->resistencia;
}