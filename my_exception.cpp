/* Implement your MyException::what() function by overriding it here:
 */
//hello
#include "my_exception.h"

// What function to return a string for exception handling
const char * MyException::what() const noexcept
{
  //return the custom error message
  return "Custom error has occurred.";
}
