
#include "AMateria.hpp"
class pop
{
    public:
        AMateria *m;
        pop();
		pop(const pop& copy);
        ~pop();
        void set_m(AMateria *m);
};