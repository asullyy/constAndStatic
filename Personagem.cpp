#include "personagem.h"
#include <iostream>
#include <string>
#include "Data.h"
using std::cout;

string Personagem::cenarios[CENARIOS] = {"CHINA, BRASIL, EUA"};
string Personagem::armas[ARMAS] = {"faca", "tesoura", "AK-47"};

Personagem::Personagem(int d, int m, int a)
{
     if ( m > 0 && m <= 12 ) // validate the month
        mes = m;
    
    if ( a < 0 )
        ano = 1900;
    else
        ano = a;
}

Personagem::Personagem()
:nomePersonagem(""), idadePersonagem(0), MAXSIZENAME(10), check(false){}

Personagem::Personagem(string nomePersonagem, int idadePersonagem, bool check)
:MAXSIZENAME(10)
{
    setNomePersonagem(nomePersonagem);
    setIdadePersonagem(idadePersonagem);
}

Personagem::Personagem(int idadePersonagem)
:nomePersonagem(""), MAXSIZENAME(10){
    setIdadePersonagem(idadePersonagem);
}


// Construtor cópia 
Personagem::Personagem(const Personagem& other)
:MAXSIZENAME(other.MAXSIZENAME)
{
    this->nomePersonagem = other.nomePersonagem;
    this->idadePersonagem = other.idadePersonagem;
}

void Personagem::print() const
{
   cout << dia <<"/"<< mes<<"/"<< ano;
}
void Personagem::setNomePersonagem(string nomePersonagem){
    this ->nomePersonagem = nomePersonagem;
}

string Personagem::getNomePersonagem(){
    return nomePersonagem;
}

void Personagem::setIdadePersonagem(int idadePersonagem){
    if (idadePersonagem > 0)
        this->idadePersonagem = idadePersonagem;
    else
        this->idadePersonagem = 0;
}
int Personagem::getIdadePersonagem(){
    return idadePersonagem;
} 

void Personagem::mostrarMensagem(){
    if (nomePersonagem.size() > 0){
        cout << "Nome do personagem: "<< nomePersonagem <<"\n";
    }
    else
    {
        cout << "Pesonagem sem nome :|" << "\n";
    }
    
    cout << "Idade do personagem: "<<idadePersonagem<<"\n";

}


int Personagem::numPersonagem = 0;
const int Personagem::MAXNUMPERSONAGENS = 5;

void Personagem::setNumPersonagem(int numPersonagem)
{
    cout << "Numero de Personagens " << Personagem::numPersonagem << '\n';
    cout << "Criação de novos personagens " << numPersonagem << '\n';
    if ( numPersonagem > 0 )
        if ( ( numPersonagem + Personagem::numPersonagem) <= MAXNUMPERSONAGENS)
        {
            this->numPersonagem = numPersonagem;
            Personagem::numPersonagem += this->numPersonagem;            
        }
        else
            if( (MAXNUMPERSONAGENS - Personagem::numPersonagem) > 0 )
            {
              this->numPersonagem =  MAXNUMPERSONAGENS - Personagem::numPersonagem;
              Personagem::numPersonagem += this->numPersonagem; 
            }
            else
              this->numPersonagem = 0;
    else
        this->numPersonagem = 0;


    cout << "Novos personagens criados" << this->numPersonagem << "\n\n";
}

//arrays


