// Programmer:	Justus Peterson-Rhodes
// Student ID:	jepfn5
// Section:	A
// Date: 	09/14/2018
// File:	krustyMath.cpp
// Description:
//
//
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int option;
  int num;
  int base;
  // Minimum and Maximum values permitted for num
  const int MIN_NUM = 0;
  const int MAX_NUM = 99999;
  // Minimum and Maximum values for base
  const int MIN_BASE = 10;
  const int MAX_BASE = 2;
  // Loop Controls for variable assigning attempts
  int a = 0;
  const int MAX_ATTEMPTS = 3;
  do
  {
    a = 0;
    cout << "-----OPTIONS-----" << endl;
    cout << "1: Enter a non-negative Integer, x [5 digits or less]" << endl;
    cout << "2: Enter an integer base n [2 <= n < 10]" << endl;
    cout << "3: Verify x is a valid base n number" << endl;
    cout << "4: Convert x to base 10" << endl;
    cout << "5: Quit" << endl;
    cin >> option;
    switch (option)
    {
      case 1:
        do
        {
          cout << "Enter a value for x: ";
          cin >> num;
          a++;
        }
        while (!(num >= MIN_NUM
                && num <= MAX_NUM)
                && a < MAX_ATTEMPTS);
        cout << "x is now equal to " << num << endl;
        break;
      case 2:
        do
        {
          cout << "Enter a value n: ";
          cin >> base;
          a++;
        }
        while (!(base >= MIN_BASE
                && base <= MAX_BASE)
                && a < MAX_ATTEMPTS);
        cout << "n is now equal to " << base << endl;
        break;
      case 3:
      // Verify x is a valid number of base n
        break;
      case 4:
        cout << "In standard base 10, x is " << num << endl;
        break;
    }
  }
  while (option != 5);
  cout << "Ware wa kan gun wagateki wa" << endl;
  return 0;
}
