#include "../personagens-hpp/Escorpiao.hpp"

Escorpiao::Escorpiao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Escorpiao::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Escorpiao::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Escorpiao::pegarDescricao() 
{
    return "Contra mim leva a pior!";
}