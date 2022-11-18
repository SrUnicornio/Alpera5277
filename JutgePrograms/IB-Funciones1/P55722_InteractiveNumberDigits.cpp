/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P55722_InteractiveNumberDigits.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 7 2022
 * @brief Write an iterative function that returns the number of digits of a number n.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P55722
 */
#include <iostream>
#include <cmath>
using namespace std;

int number_of_digits(int a) {
	int i{1}; 
  if (a!=0){
	i = (log10(a))+1;}
	return i;
}

int main() {
	int numero;
	while(cin >> numero){
	cout <<"number_of_digits("<<numero<<") → "<< number_of_digits(numero) << endl;
}
}