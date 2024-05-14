#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/EscudoDeCobre.hpp"

EscudoDeCobre::EscudoDeCobre(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string EscudoDeCobre::getDescricaoArma() 
{
    return this->descricaoArma;
}

int EscudoDeCobre::getResistencia() 
{
    return this->resistencia;
}