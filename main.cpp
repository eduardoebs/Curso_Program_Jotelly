/*
 * main.cpp
 * author 2020 Eduardobs 
 * escreva um algoritmo para ler as dimensoes de um retangulo (base x altura), calcular e escrever area do retangulo  
 */
#include <iostream> // necessario para std::cout, std::cin

/*
* Função principal
*/
int main (){
  float base, altura;

  std::cout << "entre com o valor base: ";
  std::cin >> base;
  std::cout << "entre com o valor altura: ";
  std::cin >> altura;
  std::cout << (base * altura) << "\n";
  
}

