#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/EspadaDeCobre.hpp"

EspadaDeCobre::EspadaDeCobre(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int EspadaDeCobre::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string EspadaDeCobre::gerarRuidoAtaque()
{
    return "split split";
}