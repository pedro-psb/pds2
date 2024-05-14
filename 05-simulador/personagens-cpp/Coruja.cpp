#include "../personagens-hpp/Coruja.hpp"

Coruja::Coruja(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Coruja::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Coruja::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Coruja::pegarDescricao() 
{
    return "Uhl Uhl!";
}