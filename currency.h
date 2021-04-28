
#pragma once

#include <string>
#include <vector>

using namespace std;

class Currency
{
  string c_name;
  string c_code;
  int c_numericCode;

  
public:
  Currency(const string& name, const string& code ):
         c_name(name), c_code(code) {}
  ~Currency() = default;
    
    //, c_numericCode (numberCode)
  
  const string& get_c_name() const;
  const string& get_code() const;
  const int get_numericCode () const;
  void get_c_nsme (const string & value);
  void get_code (const string & value);
  void get_numericCode (const int value);
