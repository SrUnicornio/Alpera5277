/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file Temperatures.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 21 2022
 * @brief Escribe un programa que lea un número entero que represente una
 * temperatura dada en grados Celsius y que diga si hace calor, si hace frío o
 * si está bien. Supongamos que hace calor si la temperatura es superior a 30
 * grados, que hace frío si la temperatura es inferior a 10 grados y que está
 * bien en caso contrario. Además, advierta si con la temperatura dada el agua
 * herviría o si el agua se congelaría. Suponga que el agua hierve a 100 o más
 * grados y que el agua se congela a 0 o menos grados.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P48107
 */
#include <iostream>
using namespace std;
int main() {
  int Num1;
  cin >> Num1;
  if ((Num1 <= 30) and (Num1 >= 10)) {
    cout << "it's ok" << endl;
  } 
  if ((Num1 > 30) and (Num1 < 100)) {
    cout << "it's hot" << endl;
  } 
if (Num1 >= 100) {
    cout << "it's hot"<<endl;
      cout   << "water would boil" << endl;
  } 
if ((Num1 < 10) and (Num1 > 0)) {
  cout << "it's cold" << endl;
  } 
if (Num1 <= 0) {
  cout << "it's cold"<<endl;
  cout   << "water would freeze" << endl;
  }
}