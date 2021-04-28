
#pragma once

#include <string>

using namespace std;

class Currency
{
  string c_name;
  string c_code;

  
public:
  Currency(const string& name, const string& code ):
         c_name(name), c_code(code)  {}
  ~Currency() = default;
  
  const string& get_c_name() const;
  const string& get_code() const;

};
