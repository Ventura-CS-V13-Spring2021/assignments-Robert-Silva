#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double celcius, fahrenheit;
    cout << "Enter the temperature in celcius\n";
    cin >> celcius;

    fahrenheit = 9/5.0 * celcius +32;

    cout << celcius << "degrees in celcius to" << fahrenheit << "degrees in fahrenheit." << endl;
}