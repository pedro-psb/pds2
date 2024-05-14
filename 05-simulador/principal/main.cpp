#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

#include "../acessorios-hpp/EspadaDeLatao.hpp"
#include "../acessorios-hpp/EspadaDeBronze.hpp"
#include "../acessorios-hpp/EspadaDeCobre.hpp"
#include "../acessorios-hpp/EspadaDePrata.hpp"
#include "../acessorios-hpp/EspadaDeOuro.hpp"

#include "../acessorios-hpp/Panela.hpp"
#include "../acessorios-hpp/EscudoDeLatao.hpp"
#include "../acessorios-hpp/EscudoDeCobre.hpp"
#include "../acessorios-hpp/EscudoDePrata.hpp"
#include "../acessorios-hpp/EscudoDeOuro.hpp"

#include "../personagens-hpp/Formiga.hpp"
#include "../personagens-hpp/Raposa.hpp"
#include "../personagens-hpp/Aguia.hpp"
#include "../personagens-hpp/Coruja.hpp"
#include "../personagens-hpp/Escorpiao.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);

    ArmaAtaque* arma3 = new EspadaDeLatao("Espada Mediocre de Latao",0,5);
    ArmaAtaque* arma4 = new EspadaDeBronze("Espada Razoavel de Bronze",0,10);
    ArmaAtaque* arma5 = new EspadaDeCobre("Espada Boa de Cobre",5,20);
    ArmaAtaque* arma6 = new EspadaDePrata("Espada Poderosa de Prata",10,50);
    ArmaAtaque* arma7 = new EspadaDeOuro("Espada Suprema de Ouro",40,50);

    ArmaDefesa* escudo = new Escudo("Latão", 1);

    ArmaDefesa* escudo2 = new EscudoDeLatao("Escudo Mediocre de Latao", 1);
    ArmaDefesa* escudo3 = new Panela("Penela de Pressão da Roça", 2);
    ArmaDefesa* escudo4 = new EscudoDeCobre("Escudo Boa de Cobre", 3);
    ArmaDefesa* escudo5 = new EscudoDePrata("Escudo Poderosa de Prata", 4);
    ArmaDefesa* escudo6 = new EscudoDeOuro("Escudo Suprema de Ouro", 5);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem* p3 = new Chaves(1, "Chaves Eq1 - Reserva", 100, arma, escudo);
    Personagem* p2 = new Chaves(2, "Chaves Eq2", 40, arma, escudo);
    Personagem* p4 = new Chaves(2, "Chaves Eq2 - Reserva", 100, arma, escudo);

    Personagem* p5 = new Formiga(2, "Formiga Atomica", 50, arma3, escudo2);
    Personagem* p6 = new Raposa(2, "Raposa do Norte", 100, arma7, escudo5);
    Personagem* p7 = new Aguia(2, "Aguia do Oeste", 75, arma4, escudo6);
    Personagem* p8 = new Coruja(2, "Coruja Diurna", 80, arma5, escudo3);
    Personagem* p9 = new Escorpiao(2, "Escorpiao Giratorio", 120, arma6, escudo4);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);

    simulador->adicionarPersonagem(p4, 1);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 1);
    simulador->adicionarPersonagem(p7, 2);
    simulador->adicionarPersonagem(p8, 1);
    
    simulador->iniciarSimulacao();

    return 0;
}
