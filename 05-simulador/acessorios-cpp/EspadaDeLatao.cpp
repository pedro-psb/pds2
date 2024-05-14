#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/EspadaDeLatao.hpp"

EspadaDeLatao::EspadaDeLatao(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int EspadaDeLatao::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string EspadaDeLatao::gerarRuidoAtaque()
{
    return "pish tsc";
}