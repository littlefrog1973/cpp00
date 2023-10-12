/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:36:39 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/09 16:59:17 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

Contact::Contact(string f_name, string l_name, string n_name, string p_no, string secret)
{
	firstName = f_name;
	lastName = l_name;
	nickName = n_name;
	phoneNumber = p_no;
	darkestSecret = secret;
}

void	Contact::display(int index)
{
	cout << "Contact #" << index << "|";
	printColumn(firstName, 10);
	printColumn(lastName, 10);
	printColumn(nickName, 10);
	cout << endl;
}

void	Contact::printColumn(const string& text, size_t width)
{
	if(text.length() <= width)
		cout << std::right << std::setw((int) width) << text;
	else
		cout << std::right << std::setw(width - 1) << text.substr(0, width - 1) << ".";
	cout << "|";
}

void	Contact::displayAll()
{
	cout << firstName << endl;
	cout << lastName << endl;
	cout << nickName << endl;
	cout << phoneNumber << endl;
	cout << darkestSecret <<endl;
}
