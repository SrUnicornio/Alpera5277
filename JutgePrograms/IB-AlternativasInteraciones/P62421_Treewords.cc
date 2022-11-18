/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  TreeWords.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 25 2022
 * @brief Write a program that reads three words a, b and c, and prints a line with c, b and a in this order.

Print a line with the three words in reverse order, separated with spaces.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P62424 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
string palabra1, palabra2, palabra3;

  cin >> palabra1 >>palabra2>>palabra3;


   cout << palabra3 <<" "<<palabra2<<" "<<palabra1<<endl;
}
 
