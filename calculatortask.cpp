#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

  char optr;
  float number1, number2;

  cout << "Enter the operator according to operation you want to perform: \n 1. ADDITION ( + )\n 2. SUBTRACTION ( - )\n 3. DIVITION ( / )\n 4. MULTIPLICATION ( * )\n\n";
  
  cin >> optr;

  cout << "Enter the two operands: ";
  cin >> number1 >> number2;

  switch(optr) {

    case '+':
      cout << number1 << " + " << number2 << " = " << number1 + number2;
      break;

    case '-':
      cout << number1 << " - " << number2 << " = " << number1 - number2;
      break;

    case '*':
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      break;

    case '/':
      cout << number1 << " / " << number2 << " = " << number1 / number2;
      break;

    default:
      cout << "Error! Enter a valid operator";
      break;
  }

  return 0;
}
