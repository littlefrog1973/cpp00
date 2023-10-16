/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: littlefrog <littlefrog@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:39:33 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 09:06:31 by littlefrog       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"
# define MAX_CONTACTS 8

using std::cout;
using std::cin;
using std::endl;

class PhoneBook
{
private:
	static const int	maxContacts = MAX_CONTACTS;
	Contact				contacts[MAX_CONTACTS];
	int					contactCount;
	int					oldestContactIndex;

public:
	PhoneBook();
	bool	addContact(const Contact& contact);
	void	displayAllContacts();
	int		returnCount();
	void	displayOneContact(int index);
};
#endif
