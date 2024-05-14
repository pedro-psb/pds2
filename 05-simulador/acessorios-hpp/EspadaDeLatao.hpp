#ifndef ESPADA_DE_LATAO
#define ESPADA_DE_LATAO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class EspadaDeLatao : public ArmaAtaque
{
    public:
        EspadaDeLatao(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif