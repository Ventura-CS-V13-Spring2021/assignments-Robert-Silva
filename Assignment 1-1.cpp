#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double rateA = 15.00;
  const double rateB = 12.00;
  const double rateC = 9.00;

  int seatA, seatB, seatC;
  cout << "How many tickets from class A were sold?" << endl;
  cin seatA;
  cout << "How many tickets from class B were sold?" << endl;
  cin seatB;
  cout << "How many tickets from class C were sold?" << endl;
  cin seatC;

  double cashseatA = rateA * seatA;
  double cashseatB = rateB * seatB;
  double cashseatC = rateC * seatC;
  double total = cashseatA + cashseatB + cashseatC;
  
  cout << "You made $" << fixed <<showpoint << setprecision(2) << total << "for all seats." << endl;
}