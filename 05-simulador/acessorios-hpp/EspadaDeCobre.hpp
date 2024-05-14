#ifndef ESPADA_DE_COBRE
#define ESPADA_DE_COBRE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class EspadaDeCobre : public ArmaAtaque
{
    public:
        EspadaDeCobre(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif