
#pragma once

#include <string>

using namespace std;

class Currency
{
  string n_short_name;
  string n_name;
  
public:
  Currency(const string& short_name, const string& name):
         n_short_name(short_name), n_name(name) {}
  ~Currency() = default;
  
  const string& get_short_name() const;
  const string& get_name() const;
};
