/*
 * main.cpp
 * author 2020 Eduardobs 
 * faça um programa que leia um num e exiba antecessor e seu sucessor
 */
#include <iostream> // necessario para std::cout, std::cin

/*
* Função principal
*/
int main (){
  int num1;

  std::cout << "entre com o 1 num: ";
  std::cin >> num1;
  std::cout << num1 - 1 << "\n";
  std::cout << num1 + 1 << "\n";
 
}

