/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:22:54 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/27 18:52:54 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(std::string& name);
        Dog(const Dog& copy);
        ~Dog();
    // copy assignement = 
    Dog& operator=(const Dog& other);

    //Methods 
    void makeSound() const;
    //getter
        std::string& get_dogname();
};

#endif