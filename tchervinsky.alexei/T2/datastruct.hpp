#ifndef _DATA_STRUCT_HPP_
#define _DATA_STRUCT_HPP_

#include <iostream>
#include <string>
#include <ccomplex>

namespace tchervinsky
{
  struct Delimiter
  {
    char delimiter;
  };

  struct Complex
  {
    std::complex<double> &value;
  };
  struct DataStruct
  {
    long long key1;
    std::complex<double> key2;
    std::string key3;
  };

  std::istream& operator >> (std::istream& in, Delimiter&& dest);
  std::istream& operator >> (std::istream& in, Complex&& dest);
  std::istream& operator >> (std::istream& in, DataStruct& dest);
  std::ostream& operator << (std::ostream& out, const DataStruct& dest);
  bool operator < (const DataStruct& a, const DataStruct& b);
}
#endif