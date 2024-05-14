#include "../personagens-hpp/Aguia.hpp"

Aguia::Aguia(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Aguia::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Aguia::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Aguia::pegarDescricao() 
{
    return "A derrota lhe espera!";
}