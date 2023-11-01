/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:59:11 by yochakib          #+#    #+#             */
/*   Updated: 2023/11/01 13:30:16 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& copy);
        virtual ~Animal();

        //copy assignemet
        Animal& operator=(const Animal& other);

        //Methods
        virtual void makeSound() const = 0;
        //getter and setter
        const std::string& get_type() const;
        void set_type(const std::string& type);
        
};

#endif