/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:38:39 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/15 21:06:29 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

	public:
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm &cref);
		AForm &operator=(const AForm &cref);
		virtual ~AForm();

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NotSigned : public std::exception
		{
			public:
				const char *what() const throw();
		};
		std::string	getName(void) const;
		int			getsignGrade(void) const;
		int			getexecGrade(void) const;
		bool		signStatus(void) const;
		void		beSigned(const Bureaucrat &cref);
		void		isFormSigned(const Bureaucrat &cref) const;
		virtual void execute(const Bureaucrat & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm &cref);

# endif
