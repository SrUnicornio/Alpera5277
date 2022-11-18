/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file Intervals_1.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 2 2022
 * @brief Write a program that, given two intervals, computes the interval
 * corresponding to their intersection, or tells that it is empty.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P51126
 */
#include <iostream>
using namespace std;

int main() {
  int intervalo1_a{0}, intervalo1_b{0}, intervalo2_a{0}, intervalo2_b{0};
  cin >> intervalo1_a >> intervalo1_b >> intervalo2_a >> intervalo2_b;

  int grande = min(intervalo1_b, intervalo2_b);
  int pequenio = max(intervalo1_a, intervalo2_a);

  if (pequenio > grande) {
    cout << "[]" << std::endl;
    return 0;
  }
  cout << "[" << pequenio << "," << grande << "]" << std::endl;
  return 0;
}
