/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:22:54 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/29 15:40:36 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Cat : public Animal
{
    private :
        Brain* attribut_cat;
    public :
        Cat();
        Cat(std::string& name);
        Cat(const Cat& copy);
        ~Cat();
    // copy assignement = 
    Cat& operator=(const Cat& other);
    void makeSound() const;
    //getter
        std::string& get_Catname();
};

#endif