/*
 * main.cpp
 * author 2020 Eduardobs 
 */
#include <iostream> // necessario para std::cout, std::cin

/*
* Função principal
*/
int main (int argc, char **argv){
  std::string nacionalidade = "nascido";
  float altura_m = 1.82 ,peso_kg = 94.5;
  int idade_year = 1975;
  char sexo = 'M';
  
  // int valor1;
  // int valor2;
  // int resultado;
  // std::cout << "entre com valor 1: ";
  // std::cin >> valor1;
  // std::cout << "entre com valor 2: ";
  // std::cin >> valor2;
  // resultado = valor1 + valor2;
  // std::cout << resultado;

  std::cout << "entre com altura: ";
  std::cin >> altura_m;
  std::cout << "entre com peso: ";
  std::cin >> peso_kg;
  std::cout << "entre com idade: ";
  std::cin >> idade_year;
  std::cout << "entre com sexo: ";
  std::cin >> sexo;
  std::cout << "local de nascimento: ";
  std::cin >> nacionalidade;

  std::cout << "\naltura: " << altura_m << "\n";
  std::cout << "peso: " << peso_kg << "\n";
  std::cout << "idade: " << idade_year << "\n";
  std::cout << "sexo: " << sexo << "\n";
  std::cout << "local de nascimento: " << nacionalidade;
  return 0;
}

