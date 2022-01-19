/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:54:16 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/18 23:12:24 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include "contact.class.hpp"

void	ShowUsage(void);
void	GetContact(Contact *newContact);
void	PrintPhonebook(Contact phonebook[8]);
void	PrintContact(Contact contact);


#endif
