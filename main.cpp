// Sprawdzenie czy liczba jest palindromem - Sposób 2.

#include <iostream>

using namespace std;

bool isPalindrom(string s)
{
  for (int i = 0, j = s.size(); i < j; i++, j--)
  {
    if (s[i] == s[j])
    {
      return false;
    }
  }
  return true;
}  

int main() 
{
  string word = "aab aba ace aca";
  word.size();
  if(isPalindrom(word))
  {
    cout << "yes\n";
  }
  else
  {
    cout << "no\n";
  }  
  
  return 0;
}