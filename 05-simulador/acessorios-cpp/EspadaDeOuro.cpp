#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/EspadaDeOuro.hpp"

EspadaDeOuro::EspadaDeOuro(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int EspadaDeOuro::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string EspadaDeOuro::gerarRuidoAtaque()
{
    return "teng split";
}