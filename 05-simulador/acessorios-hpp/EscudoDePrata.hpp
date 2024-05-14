#ifndef ESCUDO_DE_PRATA
#define ESCUDO_DE_PRATA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class EscudoDePrata : public ArmaDefesa
{
    public:
        EscudoDePrata(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif