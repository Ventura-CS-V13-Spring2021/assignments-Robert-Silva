#include <iostream>
using namespace std;
int main()
{
  int number1, number2, number3;
 
  cout << "Please enter the three different numbers";
  cin >> number1 >> number2 >> number3;

  if (number1-number2 > 0 && number1-number3 > 0) {
    cout << number1 << "Is greater than both" << number2 << "and" << number3;
  }
  else
  {
    if (number2 - number3 > 0) {
      cout << number2 << "is greater than both" << number1 << "and" << number3;
    }
    else {
      cout << number3 << "is greater than both" << number1 << "and" << number2;
    }
  }
  cout <<"\n"
  return 0;