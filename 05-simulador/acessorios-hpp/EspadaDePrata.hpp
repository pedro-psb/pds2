#ifndef ESPADA_DE_PRATA
#define ESPADA_DE_PRATA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class EspadaDePrata : public ArmaAtaque
{
    public:
        EspadaDePrata(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif