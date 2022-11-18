/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file TomtoButtom.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 22 2022
 * @brief Write a program that reads a number n, and prints all numbers between 0 and n.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P37500
 */
#include <iostream>
using namespace std;
int main() {
  int Num1, Num2=0;

  cin >> Num1;
  
if (Num1 ==0){cout << "0"<<endl; return 0;}
  if (Num1<0) {
    cin >> Num1;
  }
    cout << "0"<<endl;
    do {
     
      Num2 = Num2 + 1;
    
        cout << Num2 << endl;
    } while (Num2 != Num1);
    

  return 0;
}
