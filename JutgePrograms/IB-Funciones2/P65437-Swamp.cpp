/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  P65437-Swamp.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 16 2022
 * @brief Write a procedure
     void swap2(int& a, int& b);
that swaps the value of its parameters.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P65437 */
#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}