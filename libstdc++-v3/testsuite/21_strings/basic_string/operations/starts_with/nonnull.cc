// { dg-options "-std=gnu++20 -Wnonnull -O0" }
// { dg-do compile { target c++20 } }

#include <string>

void
test01(const std::string& s)
{
  s.starts_with((const char*)nullptr);  // { dg-warning "\\\[-Wnonnull" }
  s.starts_with((char*)nullptr);	// { dg-warning "\\\[-Wnonnull" }
  s.starts_with(nullptr);		// { dg-warning "\\\[-Wnonnull" }
}
