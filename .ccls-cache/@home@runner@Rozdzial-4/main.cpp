// Sprawdzenie czy liczba jest palindromem - Sposób 2.

#include <iostream>

using namespace std;

int main() 
{
  bool isPalindrom = true;
  // string wyraz = "kajak";
  int b = 0;
  int n = 1221; // Gdy mamy sytuacje z int'em.
  string wyraz = to_string(n); // Konwersja typu string na typ int.
  int e = wyraz.size() - 1;
  // isPalindrom ? cout << "yes\n" : cout << "no\n";
  
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