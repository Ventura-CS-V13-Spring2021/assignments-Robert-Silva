#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     
     if (number1 != number2) 
      cout<< "There are three duplicate numbers" << endl;
    
    else if(number1 != number3)
      cout<< "There are two duplicate numbers" << endl;
    
    else if(number2 != number3)
      cout << "There are two duplicate numbers" << endl;

    else if((number1 == number2) && (number2 == number3))
      cout << "All numbers are the same" << endl;

    else
      cout<< "All numbers are distinct" << endl;
     return 0;
}