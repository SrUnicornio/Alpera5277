/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P35080_Squares4.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 6 2022
 * @brief Write a program that prints n squares n × n. Draw each square
 * independently, and start filling it with 0, 1, …, 9, 0, etc.
 * @bug There are no espacionown bugs
 * @see https://jutge.org/problems/P54080
 */
#include <iostream>
using namespace std;

int main() {
  int numero{0}, espacio{0}, cuadrado{0};
  cin >> numero;
  while (espacio < numero) {
    if (espacio == 0); else {
      cout << endl;
    }
    for (int i{0}; i < numero; i++) {
      for (int j{0}; j < numero; j++) {
        cout << cuadrado;
        cuadrado += 1;
        if (cuadrado > 9)
          cuadrado = 0;
      }
      cout << endl;
    }
    cuadrado = 0;
    espacio += 1;
  }
}