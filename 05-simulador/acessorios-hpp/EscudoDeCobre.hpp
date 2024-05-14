#ifndef ESCUDO_DE_COBRE
#define ESCUDO_DE_COBRE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class EscudoDeCobre : public ArmaDefesa
{
    public:
        EscudoDeCobre(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif