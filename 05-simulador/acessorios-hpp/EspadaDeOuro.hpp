#ifndef ESPADA_DE_OURO
#define ESPADA_DE_OURO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class EspadaDeOuro : public ArmaAtaque
{
    public:
        EspadaDeOuro(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif