#include "currency.h"

Currency::Currency(const string& short_name, const string& name)
{
  m_short_name = short_name
}

const string& Currency::get_short_name() const
{
  return m_short_name;
}

const string& Currency::get_name() const
{
  return n_name;
}
