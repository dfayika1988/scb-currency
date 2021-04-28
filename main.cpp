
#include <iostream>
#include <vector>
#include <memory>

#include "currency.h"

using namespace std;

int main()
{
  string input;
  vector<unique_ptr<Currency>> currencies;
  
  cout << "Write currency codes or enter quit to quit:";
    cin>> input;
    
    while ( input != "quit")
    {
      currencies.push_back(unique_ptr<Currency>(new Currency(input,"")));
      cin >> input;
      
    }
  
  cout << "Currencies in the list:" << endl;
  for (auto &ccy: currencies)
  {
    cout <<ccy->get_short_name() << endl;
  }
}

