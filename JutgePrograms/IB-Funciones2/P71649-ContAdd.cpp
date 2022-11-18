/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P71649-ContAdd.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 17 2022
 * @brief Write a procedure
     void count_and_add(int& num, int& sum);
to read a sequence of integer numbers until its end, and store in num how many numbers it has, and store in sum the sum of those numbers.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P71649
 */
#include <iostream>
using namespace std;

void count_and_add(int& num, int& sum){
  sum=0;
  num=0;
  int x;
  while (cin >> x){
    ++num;
    sum += x;
  }
}

int main() {
  int knumero{0}, ksuma{0};
    count_and_add(knumero, ksuma);
  cout << knumero <<" "<< ksuma << endl;
}