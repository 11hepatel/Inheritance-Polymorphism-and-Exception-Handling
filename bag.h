/* An abstract class which will serve as an interface to the two bag implementations.
 * You must include the functions insert(), remove(), and size() here as pure virtual functions.
 * Write the preprocessor header guards (ifndef, etc) around the content of this file (use others as guidance).
 * The name of the templated abstract class should be Bag
 * Include a public variable like this -- std::string parent_variable = "this is from the abstract class";
 * It must be templated on T
 * This is the ONE h file you CAN edit.
 */

#include <iostream>
#include <string>
#include "my_exception.h"
using std::string;

#ifndef BAG_H
#define BAG_H
/*
Writes to a std::string passed by reference, containing:
    * the your (the student author's) Campus Username
Put the definition for this in bag_simple.hpp
*/
void get_identity(string &my_id);


// implement your abstract class here:
template <typename T>
class Bag
{
  public:

    //parent_variable
    string parent_variable = "this is from the abstract class";

    //pure virtual functions 
    virtual bool insert(const T &item) = 0; //inserting an item
    virtual bool remove(const T &item) = 0; //removing an item
    virtual int size() const = 0; //size is constant

};


#endif
