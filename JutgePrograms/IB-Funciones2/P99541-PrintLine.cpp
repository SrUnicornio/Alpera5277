/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P99541-PrintLine.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 17 2022
 * @brief Write a procedure
     void print(int s, char c, int n);
to print a line with s spaces followed by n characters c. For instance, these three calls.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P99541
 */

#include <iostream>
using namespace std;

void print(int s, char c, int n) {
  for (int i = 0; i < s; i++) {
    cout << " ";
  }
  for (int j = 0; j < n; j++) {
    cout << c;
  }
  cout << endl;
}

int main(){
int space, numero;
  char caracter;
  while (cin >>space >> caracter >> numero){
    print(space, caracter, numero);
  }
  
}