/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P17913_DoubleFactorial.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 4 2022
 * @brief Write an iterative function that returns the double factorial n!! for a natural n.
 * @bug There are no known bugs
 * @see https://kfactorialutge.org/problems/P17913
 */
#include <iostream>
#include <cmath>
using namespace std;

 int double_factorial(int x);
int main() {
short numero;
while (cin >>numero){
cout << "factorial("<<numero<<") → "<<double_factorial(numero)<<endl;
}
  return 0;
}
int double_factorial(int x){
    int kfactorial{1};
    while (x > 0) {
        kfactorial = kfactorial*x;
        x -=2;
    }
    return kfactorial;
}
