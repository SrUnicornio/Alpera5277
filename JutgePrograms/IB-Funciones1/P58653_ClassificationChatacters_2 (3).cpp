/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P58653_ClassificationChatacters_2.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 7 2022
 * @brief Write a program that reads a character and tells if it is a letter, if
 * it is a vowel, if it is a consonant, if it is an uppercase letter, if it is a
 * lowercase letter and if it is a digit.
 * @bug There are no known bugs
 * @see https://kfactorialutge.org/problems/P17913
 */
#include <ctype.h>
#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
  cout << s << "('" << c << "') = ";
  if (b == 1) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
}

bool letter(char c) {
  if (isalpha(c)) {
    return true;
  }
  return false;
}
bool vowel(char c) {
  if (letter(c)) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      return true;
      ;
    } else {
      return false;
    }
  }
}
bool consonant(char c) {
  if (letter(c)) {
    if (!vowel(c)) {
      return true;
    }
  }
  return false;
}
bool lower(char c) {
  if (letter(c)) {
    if (c == tolower(c)) {
      return true;
    }
  }
  return false;
}
bool upper(char c) {
  if (letter(c)) {
    if (c==toupper(c)) {
      return true;
    }
  }
  return false;
}
bool digit(char c) {
  if (isdigit(c)) {
    return true;
  }
  return false;
}
int main() {
  char caracter;
  cin >> caracter;
  print_line(caracter, "letter", letter(caracter));
  print_line(caracter, "vowel", vowel(caracter));
  print_line(caracter, "consonant", consonant(caracter));
  print_line(caracter, "uppercase", upper(caracter));
  print_line(caracter, "lowercase", lower(caracter));
  print_line(caracter, "digit", digit(caracter));
  return 0;
}
