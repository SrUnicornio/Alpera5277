/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P79817_Power.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 4 2022
 * @brief Write a function that returns the absolute value of an integer n.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P96275
 */
#include <iostream>
#include <cmath>
using namespace std;

int absolute(int n);

int main() {
    int numero;
    cin >> numero;
    cout << "absolute("<<numero<<") → "<<absolute(numero) << endl;
}

int absolute(int n){
    return fabs(n);
}