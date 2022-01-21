/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:58:12 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/21 18:37:29 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int	    Account::getNbAccounts( void ) {

	return (t::_nbAccounts);
}

int	    Account::getTotalAmount( void ) {

	return (t::_totalAmount);
}

int	    Account::getNbDeposits( void ) {

	return (t::_totalNbDeposits);
}

int	    Account::getNbWithdrawals( void ) {

	return (t::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout << "accounts:" << t::_nbAccounts << ";";
	std::cout << "total:" << t::_totalAmount << ";";
	std::cout << "deposits:" << t::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << t::_totalNbWithdrawals << std::endl;
	return;
}

Account::Account( int initial_deposit ) : \
					_accountIndex(_nbAccounts), \
					_amount(initial_deposit), \
					_nbDeposits(0), _nbWithdrawals(0) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_nbAccounts += 1;
	_totalAmount += _amount;
	return;
}

Account::~Account( void ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	_nbAccounts -= 1;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	return;
}

void	Account::makeDeposit( int deposit ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	return;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if ( withdrawal > _amount) {

		std::cout << "withdrawal:refused" << std::endl;
		return ( false );
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return ( true );
}

int		Account::checkAmount( void ) const {

	return ( _amount );
}

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
	return;
}

void	Account::_displayTimestamp( void ) {
	
	time_t		currentTime = 0;
	struct tm	*timeStruct;

	time( &currentTime );
	timeStruct = localtime( &currentTime );
	timeStruct->tm_year += 1900;
	timeStruct->tm_mon += 1;
	std::cout << "[";
	std::cout << timeStruct->tm_year;
	if ( timeStruct->tm_mon > 9 )
		std::cout << timeStruct->tm_mon;
	else
		std::cout << "0" << timeStruct->tm_mon;
	if ( timeStruct->tm_mday > 9 )
		std::cout << timeStruct->tm_mday;
	else
		std::cout << "0" << timeStruct->tm_mday;
	std::cout << "_";
	if ( timeStruct->tm_hour > 9 )
		std::cout << timeStruct->tm_hour;
	else
		std::cout << "0" << timeStruct->tm_hour;
	if ( timeStruct->tm_min > 9 )
		std::cout << timeStruct->tm_min;
	else
		std::cout << "0" << timeStruct->tm_min;
	if ( timeStruct->tm_sec > 9 )
		std::cout << timeStruct->tm_sec;
	else
		std::cout << "0" << timeStruct->tm_sec;
	std::cout << "] ";
	return;
}
