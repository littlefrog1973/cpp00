/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:50:13 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 05:45:18 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

PhoneBook::PhoneBook()
{
	contactCount = 0;
	oldestContactIndex = 0;
}

bool	PhoneBook::addContact(const Contact& contact)
{
	if (contactCount < maxContacts)
	{
		contacts[contactCount++] = contact;
	}
	else
	{
		contacts[oldestContactIndex] = contact;
		oldestContactIndex = (oldestContactIndex + 1) % maxContacts;
	}
	return true;
}

void	PhoneBook::displayAllContacts()
{
	for (int i = 0; i < contactCount; i++)
	{
		contacts[i].display(i + 1);
	}
}

void	PhoneBook::displayOneContact(int index)
{
	contacts[index].displayAll();
}

int		PhoneBook::returnCount()
{
	return (contactCount);
}
