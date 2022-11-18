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
 * other, and computes the interval corresponding to their intersection, or
 * tells that it is empty. Print ‘=’ if the intervals are equal, ‘1’ if the
 * first is inside the second (but they are not equal), ‘2’ if the second is
 * inside the first (but they are not equal), or ‘?’ otherwise. Also, print “[]”
 * if the intersection is empty, or “[x,y]” if this is their non-empty
 * intersection.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P51126
 */
#include <iostream>
using namespace std;

char ComprobadorIntervalo(const int &ia1, const int &ib1, const int &ia2,
                          const int &ib2) {
  if (ia1 == ia2 && ib1 == ib2) {
    return '=';
  }
  if (ia1 >= ia2 && ib1 <= ib2) {
    return '1';
  }
  if ((ia1 < ia2 && ib1 >= ib2) || (ia1 <= ia2 && ib1 > ib2)) {
    return '2';
  }
  return '?';
}

void DentroIntervalo(const int &ia1, const int &ib1, const int &ia2,
                     const int &ib2) {
  if (max(ia1, ia2) > min(ib1, ib2)) {
    cout << "[]";
    return;
  }
  cout << "[" << max(ia1, ia2) << "," << min(ib1, ib2) << "]";
}

int main() {
  int intervalo_a1{0}, intervalo_b1{0}, intervalo_a2{0}, intervalo_b2{0};
  cin >> intervalo_a1 >> intervalo_b1 >> intervalo_a2 >> intervalo_b2;
  cout << ComprobadorIntervalo(intervalo_a1, intervalo_b1, intervalo_a2,
                               intervalo_b2)
       << " , ";
        DentroIntervalo(intervalo_a1, intervalo_b1, intervalo_a2,
                          intervalo_b2);
      cout << endl;
}