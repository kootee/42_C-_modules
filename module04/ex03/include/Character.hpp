/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:12:07 by ktoivola          #+#    #+#             */
/*   Updated: 2024/10/30 15:53:23 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

/*  Concrete Class derived from abstract class ICharacter. 
    It has to override the following (pure virtual) base class functions:
        - GetName
        - Equip
        - Unequip
        - Use
    Additional overridden functions:
        - Destructor   */
class Character : public ICharacter {
    private:
        std::string _name;
        AMateria*   _inventory[4];
    public:
        Character(std::string const&);
        Character(const Character &);
        ~Character() override;

        Character& operator=(const Character &);
        
        
        // Class member functions
        std::string const& getName() const              override;
        void        equip(AMateria *m)                  override;
        void        unequip(int idx)                    override;
        void        use(int idx, ICharacter& target)    override;
};