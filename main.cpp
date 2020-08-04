/*
 * main.cpp
 * author 2020 Eduardobs 
 * Faça um algoritmo que leia a idade em anos e expresse-a em dias  
 */
#include <iostream> // necessario para std::cout, std::cin

/*
* Função principal
*/
int main (){
  float idade;

  std::cout << "entre com idade: ";
  std::cin >> idade; 
  std::cout << idade * 365; 
}

