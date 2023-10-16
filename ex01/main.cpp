/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:58:58 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 08:06:34 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// use <cstdlib to access null terminated portion of string str_index,
// then convert to int to prevent eternal loop when we input wrong data to index

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

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

	while (1)
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
			if (phonebook.returnCount() == 0)
			{
				cout << "No contact in phone book" << endl;
				continue ;
			}
			phonebook.displayAllContacts();
			while (1)
			{
				int			index;
				string		str_index;
				const char	*c_str_index;

				cout << "Enter index of the contact to display: ";
				cin >> str_index;
				c_str_index = str_index.c_str();
				index = std::atoi(c_str_index);
				if (index >= 1 && index <= phonebook.returnCount())
				{
					phonebook.displayOneContact(index - 1);
					break ;
				}
				else
					cout << "Invalid index. Please enter a valid index." << endl;
			}
		}
		else if (command == "EXIT")
			break ;
		else
			cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << endl;
	}
	return (0);
}
