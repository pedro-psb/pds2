#ifndef FORMIGA
#define FORMIGA
#include "../core-simulador-hpp/Personagem.hpp"
class Formiga : public Personagem
{
    public:
        Formiga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif