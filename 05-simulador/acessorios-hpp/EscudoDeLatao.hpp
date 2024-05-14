#ifndef ESCUDO_DE_LATAO
#define ESCUDO_DE_LATAO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class EscudoDeLatao : public ArmaDefesa
{
    public:
        EscudoDeLatao(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif