#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include "color.hpp"

class Fixed {
 private:
  int _rawBits;
  static const int _fractionalBits = 8;

 public:
  // Constructors
  Fixed();
  Fixed(const int value);
  Fixed(const float value);
  Fixed(const Fixed& other);

  // Destructor
  ~Fixed();

  // Operators
  Fixed& operator=(const Fixed& other);

  // Conversion
  int toInt() const;
  float toFloat() const;

  // Getters / Setters
  int getRawBits() const;
  void setRawBits(const int raw);

  // Utils
  void announce(const std::string& str, const std::string& col = YEL) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif