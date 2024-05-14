#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/EscudoDeOuro.hpp"

EscudoDeOuro::EscudoDeOuro(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string EscudoDeOuro::getDescricaoArma() 
{
    return this->descricaoArma;
}

int EscudoDeOuro::getResistencia() 
{
    return this->resistencia;
}