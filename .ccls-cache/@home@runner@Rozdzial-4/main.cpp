/*
1. Pobieranie danych
TODO:: napisać interakcję z użytkownikiem
2. Przygotowanie zdania do analizy (parsowanie)
 - zamiana małych liter na duże lub odwrotnie
-  usunięcie znaków iterpunktcyjnych 
3. Wyodrębnienie słów
- każde słowo kończy się spacją
4. Sprawdzenkie czy słowo jest palindromem
5. wypisanie palindromów
We: Ala ma kota, a kot ma Ale
Wy: Ala, a
*/

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  string zdanie = "Ala ma kota, a kot ma Ale.";
  string zdanie1 = "";

  for (int i = 0; i < zdanie.size(); i++)
  {
     if (isalnum(zdanie[i]) || isspace(zdanie[i]))
     {
       zdanie1 += zdanie[i];
     }
  }
  // cout << zdanie1 << endl; - TEST
  
  for (int i = 0; i < zdanie1.size(); i++)
  { 
    zdanie1[i] = toupper(zdanie1.at(i));
  // cout << zdanie1[i];
  }
  zdanie1 = zdanie1 + " ";
  // cout << zdanie1;

  /* string parsing(string zdanie)
  {
    return zdanie
  }

  string zdanie = "Ala ma ..."
  string sentenceParsed = parsing(zdanie)
  */
  return 0;
}