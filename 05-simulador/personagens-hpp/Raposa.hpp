#ifndef RAPOSA
#define RAPOSA
#include "../core-simulador-hpp/Personagem.hpp"
class Raposa : public Personagem
{
    public:
        Raposa(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif