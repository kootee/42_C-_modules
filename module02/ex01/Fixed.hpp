/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:54:50 by ktoivola          #+#    #+#             */
/*   Updated: 2024/10/17 12:03:57 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define DEFAULT_CONST	"Default constructor called"
# define INT_CONST 		"Int constructor called"
# define FLOAT_CONST	"Float constructor called"
# define COPY_CONST		"Copy constructor called"
# define DESTRUCTOR		"Destructor called"
# define COPY_ASSIGN	"Copy assignment operator called"

class Fixed
{
	private:
			int					_fixed_pt;
			static const int	_bits = 8;
	public:
			Fixed();				// Default constructor
			Fixed(const int);		// Integer constructor
			Fixed(const float);		// Float constructor
			Fixed(const Fixed&);	// Copy constructor
			~Fixed();				// Destructor
			
			Fixed& 			operator= (const Fixed&); // Assignment operator overload
			
			// Class member functions
			int		getRawBits(void) const;
			void	setRawBits(int const);
			float	toFloat(void) const;
			int		toInt(void) const;
};

std::ostream& operator<< (std::ostream &, const Fixed &); // Output operator overload

#endif