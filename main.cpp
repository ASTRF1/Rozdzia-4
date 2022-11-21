#include <iostream>

using namespace std;

int main() 
{
  bool isPalindrom = true;
  string wyraz = "kajak";
  
  for (int b = 0, e = wyraz.size() - 1; e > b; b++, e--)
  {
    if (wyraz[b] != wyraz[e])
    {
      isPalindrom = false;
      break;
    }
  }
  if(isPalindrom) 
  {
    cout << "Tak! Jest palindromem.";
  }
  else
  {
    cout << "Nie! Nie jest palindromem.";
  }
  return 0;
}