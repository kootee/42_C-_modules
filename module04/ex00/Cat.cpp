/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:00:35 by ktoivola          #+#    #+#             */
/*   Updated: 2024/10/23 13:06:39 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat () : type("Cat") { std::cout << DEF_ANIMAL << type << std::endl; }

Cat::Cat (const Cat &to_copy) : Animal ("Default")
{
    this->type = to_copy.type;
    std::cout << this->type << COPY_ANIMAL << std::endl;
}

Cat::~Cat () { std::cout << DESTR_ANIMAL << this->type << std::endl; }

Cat& Cat::operator=(const Cat &to_copy)
{
    std::cout << to_copy.type << ASSIGN_ANIMAL << std::endl;
    if (this == &to_copy)
        return (*this);
    this->type = to_copy.type;
    return (*this);
}