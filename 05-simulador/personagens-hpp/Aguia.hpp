#ifndef AGUIA
#define AGUIA
#include "../core-simulador-hpp/Personagem.hpp"
class Aguia : public Personagem
{
    public:
        Aguia(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif