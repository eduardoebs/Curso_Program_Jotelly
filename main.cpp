/*
 * main.cpp
 * author 2020 Eduardobs 
 *  Faça um programa que leia a idade de uma pessoa e exiba se ela é maior ou menor de idade.  
 */

#include <iostream>  // Necessário para std::cout, std::cin e std::endl

int main() {

  int idade;

  std::cout << "QUAL SUA IDADE ? \n";
  std::cin >> idade;

  if (idade < 21){ 
    std::cout << "você pode receber pensão do governo \n";
  } else if (idade > 21){
    std::cout << "você só recebe pensão se for invalido \n";
  } else {
    std::cout << "aproveite o último ano de pensão e faça uma poupança no Banco do Brasil \n";
  }
  
  return 0;
}

