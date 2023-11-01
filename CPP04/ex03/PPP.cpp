#include "PPP.hpp"

pop::pop() {}

pop::pop(const pop& copy) 
{
	*this = copy;
}

pop::~pop()
{
    delete m;
}

void pop::set_m(AMateria *m)
{
    this->m = m;
}