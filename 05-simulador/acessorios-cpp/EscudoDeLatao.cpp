#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/EscudoDeLatao.hpp"

EscudoDeLatao::EscudoDeLatao(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string EscudoDeLatao::getDescricaoArma() 
{
    return this->descricaoArma;
}

int EscudoDeLatao::getResistencia() 
{
    return this->resistencia;
}