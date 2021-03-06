#ifndef Personagem_H
#define Personagem_H

#include "Data.h"
#include <iostream>
#include <string>


using std::string;
using std::cout;

class Personagem
{
public:
    //sobrecarga de construtores(3)

    Personagem(int,int,int);
    Personagem(); //const 1
    Personagem(string, int, bool); //const 2
    Personagem(int); //const 3
    Personagem(const Personagem &);

    void setNomePersonagem(string nomePersonagem);

    string getNomePersonagem();

    void setIdadePersonagem(int idadePersonagem);

    int getIdadePersonagem();
    
    //void mostrarMensagem();

    inline static int getnumPersonagem() {return numPersonagem;}

    void setNumPersonagem(int numPersonagem);

    void printCenarios(string cenarios) const;
    void printArmas(string armas) const;
    
    void print(int dia, int mes, int ano) const
private:
    string nomePersonagem;
    int idadePersonagem;

    int dia;
    int mes;
    int ano;

    bool check;

    static int numPersonagem;

    const int MAXSIZENAME; 
    const static int MAXNUMPERSONAGENS;

    static const int ARMAS = 3;
    static string armas[ARMAS];

    static const int CENARIOS = 3;
    static string cenarios[CENARIOS];
    
    const Data DATA_CRIACAO;
};

#endif