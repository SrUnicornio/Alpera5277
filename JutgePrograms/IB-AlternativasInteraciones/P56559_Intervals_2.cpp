/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file Intervals_2.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 2 2022
 * @brief Write a program that, given two intervals, tells if one is inside the
 *other. Print ‘=’ if the intervals are equal, ‘1’ if the first is inside the
 *second (but they are not equal), ‘2’ if the second is inside the first (but
 *they are not equal), or ‘?’ otherwise.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P51126
 */
#include <iostream>
using namespace std;

int main() {
  int intervalo_a1{0}, intervalo_b1{0}, intervalo_a2{0}, intervalo_b2{0};
  cin >> intervalo_a1 >> intervalo_b1 >> intervalo_a2 >> intervalo_b2;

   if (intervalo_a1 == intervalo_a2 && intervalo_b1 == intervalo_b2) {
    cout << '=' << endl;
    return 0;
  }
  if (intervalo_a1 >= intervalo_a2 && intervalo_b1 <= intervalo_b2) {
    cout << '1' << endl;
    return 0;
  }
  if ((intervalo_a1 < intervalo_a2 && intervalo_b1 >= intervalo_b2) ||
      (intervalo_a1 <= intervalo_a2 && intervalo_b1 > intervalo_b2)) {
    cout << '2' << endl;
    return 0;
  }
  cout << '?' << endl;
  return 0;
}
