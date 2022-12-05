// Napisz funkcję, która przyjmuje dwa paramtery typu float jako wynik zwraca ich iloczyn.

#include <iostream>

using namespace std;

void iloczyn(float a, float b)
{
  cout << a * b << "\n";
}

int main()
{
  int a = 3;
  int b = 4;
  iloczyn(a, b);
  
  return 0;
}

