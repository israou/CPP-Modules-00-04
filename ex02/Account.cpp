/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:52:49 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/12 23:07:47 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
_accountIndex(_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t now = std::time(NULL);
	std::tm* ltm = std::localtime(&now);

	std::cout << "["
			 << 1900 + ltm->tm_year
			 << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon
			 << std::setfill('0') << std::setw(2) << ltm->tm_mday
			 << "_"
			 << std::setfill('0') << std::setw(2) << ltm->tm_hour
			 << std::setfill('0') << std::setw(2) << ltm->tm_min
			 << std::setfill('0') << std::setw(2) << ltm->tm_sec
			 << "] ";
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
				<< "total:" << _totalAmount << ";"
				<< "deposits:" << _totalNbDeposits << ";"
				<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "deposit:" << deposit << ";";

	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	std::cout << "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";";

	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}

	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;

	std::cout << "withdrawal:" << withdrawal << ";"
				<< "amount:" << _amount << ";"
				<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
}
