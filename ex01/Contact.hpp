/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:28:58 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/12 16:03:31 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>

//using std::cout;	using std::cin;	using std::endl;
using std::string;

class Contact
{
private:
	string	firstName;
	string	lastName;
	string	nickName;
	string	darkestSecret;
	string	phoneNumber;
public:
	Contact(): firstName(""), lastName(""), nickName(""), darkestSecret(""), phoneNumber("") {}
	Contact(string f_name, string l_name, string n_name, string p_no, string secret);
	void	display(int index);
	void	printColumn(const std::string& text, size_t width);
	void	displayAll();
};
