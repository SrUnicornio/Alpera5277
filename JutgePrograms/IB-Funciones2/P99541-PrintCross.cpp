/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P99541-PrintCross.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 17 2022
 * @brief Write a procedure
     void cross(int n, char c);
to print an n × n cross with the character c. For instance, the call
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P24381
 */
#include <iostream>
using namespace std;

void cross(int n, char c) {
  for (int i{0}; i < (n - 1) / 2; ++i) {
    for (int j{0}; j < (n - 1) / 2; ++j)
      cout << " ";
    cout << c << endl;
  } 
  for (int j{0}; j < n; ++j)
    cout << c;
  cout << endl;
  for (int i {0}; i < (n - 1) / 2; ++i) {
    for (int j = 0; j < (n - 1) / 2; ++j)
      cout << " ";
    cout << c << endl;
  }
}
int main() {
  int tamanio;
  char contenido;
  while (cin >> tamanio >> contenido) {
    cross(tamanio, contenido);
  }
  return 0;
}
