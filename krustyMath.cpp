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
  int numDigits;     // Numer of digits in num
  // Value of num at digit 1 (1s), 2 (10s), 3 (100s), etc.
  int ones;
  int tens;
  int hundreds;
  int thousands;
  int tenThousands;
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
        if (num >= 0 && num < 10)
          numDigits = 1;
        else if (num >= 10 && num < 100)
          numDigits = 2;
        else if (num >= 100 && num < 1000)
          numDigits = 3;
        else if (num >= 1000 && num < 10000)
          numDigits = 4;
        else if (num >= 10000 && num < 100000)
          numDigits = 5;
        a = 0;
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
        a = 0;
        cout << "n is now equal to " << base << endl;
        break;
      case 3:
        // Verify x is a valid number of base n by
        // Checking n to all digits of x
        if (numDigits == 1)
        {
          cout << num << endl;
          if (base > num)
          {
            cout << "The number " << num;
            cout << "is a valid number of base " << base << endl;
          }
          else
          {
            cout << "The number " << num;
            cout << "is NOT a valid number of base " << base << endl;
          }
        }
        else if (numDigits == 2)
        {
          cout << num << endl;
          ones = num % 10;
          cout << "The ones place contains " << ones << endl;
          tens = num / 10;
          cout << "The tens place contains " << tens << endl;
        }
        else if (numDigits == 3)
        {
          cout << num << endl;
          ones = num % 10;
          cout << "The ones place contains " << ones << endl;
          tens = (num / 10) % 10;
          cout << "The tens place contains " << tens << endl;
          hundreds = num / 100;
          cout << "The hundreds place contains " << hundreds << endl;
        }
        else if (numDigits == 4)
        {
          ones = num % 10;
          cout << "The ones place contains " << ones << endl;
          tens = (num / 10) % 10;
          cout << "The tens place contains " << tens << endl;
          hundreds = (num / 100) % 10;
          cout << "The hundreds place contains " << hundreds << endl;
          thousands = num / 1000;
          cout << "The ones thousands contains " << thousands << endl;
        }
        else if (numDigits == 5)
        {
          ones = num % 10;
          cout << "The ones place contains " << ones << endl;
          tens = (num % 100) / 10;
          cout << "The tens place contains " << tens << endl;
          hundreds = (num / 10) % 10;
          cout << "The hundreds place contains " << hundreds << endl;
          thousands = (num / 100) % 10;
          cout << "The ones thousands contains " << thousands << endl;
          tenThousands = num / 10000;
          cout << "The ten thousands place contains " << tenThousands << endl;
        }
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
