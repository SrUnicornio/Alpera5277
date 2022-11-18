/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file GreatestCommomDivisor.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 2 2022
 * @brief Write a program that computes the greatest common divisor of two numbers.

*Although the solution to this exercise does not need to be very efficient, it should not be too slow.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P81629
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned int num1{0}, num2{0};
    cin >> num1 >> num2;
    cout << "The gcd of " << num1 << " and " << num2 << " is " << __gcd(num1,num2) << "." << endl;
    return 0;
}