/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  NumberDigits.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 23 2022
 * @brief Write a program that reads a number and prints its number of digits.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P55622
 */
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  long long int Num1, cociente = 0, divisor = 1, NumDigitos = 0;
  cin >> Num1;

  while (Num1 < 0) {
    cin >> Num1;
  }
//Dividir n veces entre 10 = 10^n ó log10(Numero)=n
  NumDigitos = (log10(Num1) + 1);
  if (Num1==0){cout << "The number of digits of " << Num1 << " is 1."
       << endl;return 0;} 
  cout << "The number of digits of " << Num1 << " is " << NumDigitos<< "."
       << endl;
  return 0;
  }