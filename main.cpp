/*
 * main.cpp
 * author 2020 Eduardobs 
 * Faça um programa para calcular a media aritmetica entre dois valores do tipo float utilizando linguagem C++  
 */
#include <iostream> // necessario para std::cout, std::cin

/*
* Função principal
*/
int main (){
  float media_aritmetica, num1, num2;
  
  std::cout << "num1: ";
  std::cin >> num1;
  std::cout << "num2: ";
  std::cin >> num2;

  media_aritmetica = (num1+num2)/2;
  std::cout << media_aritmetica; 
}

