/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:58:58 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/09 16:59:53 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int	main(void)
{
	PhoneBook	phonebook;
	string		firstName;
	string		lastName;
	string		nickName;
	string		phoneNumber;
	string		darkestSecret;


	while (true)
	{
		string	command;
		cout << "Enter command (ADD, SEARCH, EXIT): ";
		cin >> command;

		if (command == "ADD")
		{
			cout << "Enter first name: ";
			cin >> firstName;
			cout << "Enter last name: ";
			cin >> lastName;
			cout << "Enter nick name: ";
			cin >> nickName;
			cout << "Enter phone number: ";
			cin >> phoneNumber;
			cout << "Enter darkest secret: ";
			cin >> darkestSecret;
			if (phonebook.addContact(Contact(firstName, lastName, nickName,
				phoneNumber, darkestSecret)))
				cout << "Contact addess successfully." << endl;
			else
				cout << "Phonebook is full. Oldest contact replaced." << endl;
		}
		else if (command == "SEARCH")
		{
			phonebook.displayAllContacts();
			int	index;
			cout << "Enter index of the contact to display: ";
			cin >> index;
			if (index >= 1 && index <= phonebook.returnCount())
				phonebook.displayOneContact(index);
			else
				cout << "Invalid index. Please enter a valid index." << endl;
		}
		else if	(command == "EXIT")
				break ;
		else
		{
				cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << endl;
		}
	}
	return (0);
}
