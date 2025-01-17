/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:54:50 by ktoivola          #+#    #+#             */
/*   Updated: 2024/10/21 14:01:41 by ktoivola         ###   ########.fr       */
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
			static const int	_bits;
	public:
			Fixed();				// Default constructor
			Fixed(const int);		// Integer constructor
			Fixed(const float);		// Float constructor
			Fixed(const Fixed&);	// Copy constructor
			~Fixed();				// Destructor
			
			Fixed&	operator=(const Fixed&); // Assignment operator overload
			
			// Class member functions
			int		getRawBits(void) const;
			void	setRawBits(int const);
			float	toFloat(void) const;
			int		toInt(void) const;
			// Comparison operator overloads
			bool	operator<(const Fixed&) const;
			bool	operator>(const Fixed&) const;
			bool	operator<=(const Fixed&) const;
			bool	operator>=(const Fixed&) const;
			bool	operator==(const Fixed&) const;
			bool	operator!=(const Fixed&) const;
			// Arithmetic operator overloads
			Fixed	operator+(const Fixed&) const;
			Fixed	operator-(const Fixed&) const;
			Fixed	operator*(const Fixed&) const;
			Fixed	operator/(const Fixed&) const;
			// Increment/decrement operator overloads
			Fixed&	operator++();
			Fixed&	operator--();
			Fixed	operator++(int);
			Fixed	operator--(int);
			// Min max overload member functions
			static Fixed& min(Fixed&, Fixed&);
			static Fixed& max(Fixed&, Fixed&);
			static const Fixed& min(const Fixed&, const Fixed&);
			static const Fixed& max(const Fixed&, const Fixed&);
};

std::ostream& operator<< (std::ostream &, const Fixed &); // Output operator overload

#endif