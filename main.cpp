#include <iostream>
// We must tell the compiler where to find greet_utils.h
#include "utils/greet_utils.h"

int main()
{
  greet("Abayomi");  // Call the greet function from another folder
  return 0;
}
