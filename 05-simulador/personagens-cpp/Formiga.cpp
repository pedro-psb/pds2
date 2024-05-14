#include "../personagens-hpp/Formiga.hpp"

Formiga::Formiga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Formiga::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Formiga::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Formiga::pegarDescricao() 
{
    return "Você não tem chances!";
}