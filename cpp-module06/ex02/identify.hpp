#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void); // Randomise and return either A B C 
void identify(Base* p); 
void identify(Base& p);

# endif