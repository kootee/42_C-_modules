/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:52:55 by ktoivola          #+#    #+#             */
/*   Updated: 2024/10/29 11:02:16 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
        WrongAnimal(std::string type);
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal&);

        void        makeSound(void) const;
        std::string getType(void) const;
};