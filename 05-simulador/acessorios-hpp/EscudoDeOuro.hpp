#ifndef ESCUDO_DE_OURO
#define ESCUDO_DE_OURO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class EscudoDeOuro : public ArmaDefesa
{
    public:
        EscudoDeOuro(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif