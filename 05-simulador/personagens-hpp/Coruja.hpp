#ifndef CORUJA
#define CORUJA
#include "../core-simulador-hpp/Personagem.hpp"
class Coruja : public Personagem
{
    public:
        Coruja(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif