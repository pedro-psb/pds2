#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/EspadaDePrata.hpp"

EspadaDePrata::EspadaDePrata(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int EspadaDePrata::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string EspadaDePrata::gerarRuidoAtaque()
{
    return "cleng pish";
}