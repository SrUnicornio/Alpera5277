/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file UppercaseLowercaseLetters.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 22 2022
 * @brief Write a program that reads a letter and prints it in lowercase if it
 * was uppercase, or prints it in uppercase if it was lowercase.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P42042
 */
#include <iostream>
using namespace std;
int main() {
  int i = 0;
  char letra;

  cin >> letra;
  // comprobar que letra sea mayuscula o minuscual
  if (letra == toupper(letra)) {
    cout << "uppercase" << endl;
  } else {
    cout << "lowercase" << endl;
  }

  // Comprobar que letra es vocal mayuscula o minuscula

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||
      letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' ||
      letra == 'O' || letra == 'U') {
    cout << "vowel" << endl;
  } else {
    cout << "consonant" << endl;
  }

  return 0;
}