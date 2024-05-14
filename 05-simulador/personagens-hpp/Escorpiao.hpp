#ifndef ESCORPIAO
#define ESCORPIAO
#include "../core-simulador-hpp/Personagem.hpp"
class Escorpiao : public Personagem
{
    public:
        Escorpiao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif