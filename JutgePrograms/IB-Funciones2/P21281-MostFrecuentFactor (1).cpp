/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P21281-MostFrecuentFactor.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 17 2022
 * @brief escribir un procedimiento
      void factor( int  n , int & f , int & q );
almacenar en f el factor más frecuente de n , y almacenar en q cuantas veces
aparece. Si hay empate, elige el factor más pequeño. Por ejemplo, si se llama
con n = 450 = 2 1 · 3 2 · 5 2 , los valores después de la llamada deben ser f =3
y q = 2.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P99541
 */
#include <iostream>
using namespace std;

void factor(int n, int &f, int &q) {
  int i{2};
  q = 1;
  f = n;
  while (i * i <= n) {
    int j{0};
    while (n % i == 0 and n != 0) {
      ++j;
      n /= i;
    }
    if (j > q || (j == q && f > i)) {
      q = j;
      f = i;
    }
    ++i;
  }
}

int main() {
   int knumero{0};
  while (cin >> knumero) {
    int kfrecuence{0}, kquantity {0};
    factor(knumero, kfrecuence, kquantity);
  cout << kfrecuence << " " << kquantity << endl;}
  return 0;
}