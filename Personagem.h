#ifndef Personagem_H
#define Personagem_H

#include <iostream>
#include <string>

using std::string;
using std::cout;

class Personagem
{
public:
    //sobrecarga de construtores(3)

    Personagem(); //const 1
    Personagem(string, int, bool); //const 2
    Personagem(int); //const 3
    Personagem(const Personagem &);

    void setNomePersonagem(string nomePersonagem);

    string getNomePersonagem();

    void setIdadePersonagem(int idadePersonagem);

    int getIdadePersonagem();
    
    //void mostrarMensagem();

    void displayMessage(bool = true) const;
    void displayMessage(bool = true);

    inline static int getnumPersonagem() {return numPersonagem;}

    void setNumPersonagem(int numPersonagem);
    
private:
    string nomePersonagem;
    int idadePersonagem;
    bool check;

    static int numPersonagem;

    const int MAXSIZENAME; 
    const static int MAXNUMPERSONAGENS;
};

#endif