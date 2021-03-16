#include <iostream>
using namespace std;

int main()

{
    int num1,num2,num3,num4;

    cout << " Enter your first number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    cout << "\nPrime numbers between "
             << num1 << "and" << num2 << " are: ";

    for(num3 = num1; num3 <=num2; num3++) {
      if (num3 == 1 || num3 == 0)
        continue;

    for(num4 = 2; num4 <= num3 / 2; ++num4) {
      if (num3 % num4 ==0) {
        break;

return 0;
      }
    }
    }
   
}