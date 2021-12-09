#include "Personagem.h"
#include "Personagem.cpp"
#include<iostream>

using std::cout;

int main()
{
   
   Personagem pers1;
   const Personagem PERS2("Mario Bros", 10, false);
   Personagem PERS3(PERS2);
   
   PERS2.displayMessage();
   //PERS3.displayMessage();

   cout << "\nTestando atributos e metodos statics.\n";
   cout << "Personagens Criados " << Personagem::getnumPersonagem() << '\n';

   PERS2.printArmas();
   return 0;
}