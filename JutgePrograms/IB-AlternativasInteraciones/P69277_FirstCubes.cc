/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *Write a program that reads a number n, and prints 03,13,…,(n−1)3,n3.
Print a line with 03,13,…,(n−1)3,n3. Separate the numbers with commas.
 * @file FirstCubes.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 23 2022
 * @brief 
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P69277
 */
#include <iostream>
#include <math.h>
using namespace std;
int main() {
   int Num1, j=0, i=1; // J rasultado, i variable que es potenciada
  cin >> Num1;

  while (Num1 < 0) {
      cin >> Num1;
  }
if (Num1==0){cout << Num1<<endl; return 0;}
  do {
printf("%d%s", j, ",");
    j = pow(i, 3) ;
    i++;
    
  } while (i <= Num1);

  printf("%d\n", j);
  return 0;
}



