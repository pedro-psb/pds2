#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/EscudoDePrata.hpp"

EscudoDePrata::EscudoDePrata(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string EscudoDePrata::getDescricaoArma() 
{
    return this->descricaoArma;
}

int EscudoDePrata::getResistencia() 
{
    return this->resistencia;
}