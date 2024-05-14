#ifndef ESPADA_DE_BRONZE
#define ESPADA_DE_BRONZE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class EspadaDeBronze : public ArmaAtaque
{
    public:
        EspadaDeBronze(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif