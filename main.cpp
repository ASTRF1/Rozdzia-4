// Sprawdzenie czy liczba jest palindromem - Sposób 2.

#include <iostream>

using namespace std;

int main() 
{
  bool isPalindrom = true;
  string wyraz = "kajak";
  int b = 0;
  int e = wyraz.size() - 1;

  while (e > b)
  {
    if (wyraz[e] != wyraz[b])
    {
      cout << "Nie jest palindromem!";
      break;
    }
    b++;
    e--;
  }
  if (wyraz[b] == wyraz[e])
  {
    cout << "Jest palindromem!";
  }
  
  return 0;
}