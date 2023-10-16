/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:28:58 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 05:31:21 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

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
	Contact();
	Contact(string f_name, string l_name, string n_name, string p_no, string secret);
	void	display(int index);
	void	printColumn(const std::string& text, size_t width);
	void	displayAll();
};
#endif
