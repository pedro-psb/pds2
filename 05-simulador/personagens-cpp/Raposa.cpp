#include "../personagens-hpp/Raposa.hpp"

Raposa::Raposa(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Raposa::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Raposa::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Raposa::pegarDescricao() 
{
    return "Nao há esperanças para voce!";
}