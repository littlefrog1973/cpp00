/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:39:33 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/12 16:03:51 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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
