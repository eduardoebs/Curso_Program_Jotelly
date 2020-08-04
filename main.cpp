/*
 * main.cpp
 * author 2020 Eduardobs 
 * faça um programa que leia 3 num e exiba em ordem inversa a sua entrada
 */
#include <iostream> // necessario para std::cout, std::cin

/*
* Função principal
*/
int main (){
  int num1, num2, num3;

  std::cout << "entre com o 1 num: ";
  std::cin >> num1;

  std::cout << "entre com o 2 num: ";
  std::cin >> num2;

  std::cout << "entre com o 3 num: ";
  std::cin >> num3;

  std::cout << num3 << "\n";
  std::cout << num2 << "\n";
  std::cout << num1 << "\n";

  std::cout << "apresenta ordem inversa digitada: " << num3 << ":" << num2 << ":" << num1 << "\n";
  
}

