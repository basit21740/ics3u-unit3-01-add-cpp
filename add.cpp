// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// This program adds two numbers the user inputs

#include <iostream>

int main() {
  // this function adds two numbers
  int first;
  int second;
  // input
  std::cout << "Enter first number : ";
  std::cin >> first;
  std::cout << "Enter second number: ";
  std::cin >> second;
  // process
  std::cout << first << "+" << second << "=";
  std::cout << first + second;
  std::cout << "" << std::endl;
  std::cout << std::endl;
  std::cout << "Done." << std::endl;
}
