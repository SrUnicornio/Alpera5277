/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P57474_Factorial.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 4 2022
 * @brief Write an iterative function that, given a natural n, returns its factorial n!
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P57474
 */
#include <iostream>
#include <cmath>
using namespace std;

 int factorial(int n);
int main() {
short numero;
while (cin >>numero){
cout << "factorial("<<numero<<") → "<<factorial(numero)<<endl;
}
  return 0;
}
int factorial(int n){
  long kfactorial = 1.0;
  for(int i{1}; i<=n; i++){
    kfactorial *= i;
  } 
  return kfactorial;
}