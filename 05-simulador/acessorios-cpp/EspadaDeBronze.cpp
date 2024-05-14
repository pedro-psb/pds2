#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/EspadaDeBronze.hpp"

EspadaDeBronze::EspadaDeBronze(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int EspadaDeBronze::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string EspadaDeBronze::gerarRuidoAtaque()
{
    return "spat spat";
}