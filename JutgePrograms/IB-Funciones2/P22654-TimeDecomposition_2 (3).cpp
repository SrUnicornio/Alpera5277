/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P22654-TimeDecomposition_2_.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 17 2022
 * @brief Write a procedure
     void decompose(int n, int& h, int& m, int& s);
that, given a quantity of seconds n, computes how many hours h, minutes m and seconds s it represents. That is, we must have s + 60m + 3600h = n, with 0≤ s <60 and 0≤ m <60..
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P22654
 */
#include <iostream>
using namespace std;

 void decompose(int n, int& h, int& m, int& s){
    s = n%60;
    h = n/3600;
    m = (n/60)%60;
}
int main() {

  return 0;
}