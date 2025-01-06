/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:52:49 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/06 18:51:38 by ichaabi          ###   ########.fr       */
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

Account::Account(int initial_deposit) : //constructeur appelé pour chaque montant dans le tableau amounts[]
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
	std::time_t now = std::time(nullptr);//obtient le timestamp actuel(secondes depuis 1970)
	std::tm* ltm = std::localtime(&now);//convertit timestamp en structure tm avec y/m/d/h
// structure tm contient :
// tm_year (années depuis 1900)
// tm_mon (0-11 pour mois)
// tm_mday (1-31 pour jour)
// tm_hour (0-23)
// tm_min (0-59)
// tm_sec (0-59)
	std::cout << "["
			 << 1900 + ltm->tm_year //+1900 pour avoir l annee complete
			 << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon
			 << std::setfill('0') << std::setw(2) << ltm->tm_mday
			 << "_"
			 << std::setfill('0') << std::setw(2) << ltm->tm_hour
			 << std::setfill('0') << std::setw(2) << ltm->tm_min
			 << std::setfill('0') << std::setw(2) << ltm->tm_sec
			 << "] ";
}
//les getters statiques pour les info

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

	_amount += deposit;	//jajoute le depot au compte
	_totalAmount += deposit; //jajoute le depot au total
	_nbDeposits++; //jincremente le nbre de depots du compte
	_totalNbDeposits++; //jincremente le nombre total de depots

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

	_amount -= withdrawal;//nqess meno le retrait dial lcompte
	_totalAmount -= withdrawal;	//nqess le retrait du total
	_nbWithdrawals++;//jincremente le nombre de retraits du compte
	_totalNbWithdrawals++;//jincremente le nombre total de retraits

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


// std::time_t : Type de donnée qui représente un timestamp (nombre de secondes)
// std::tm : Structure qui contient date/heure décomposée
// * : Pointeur vers cette structure
// ltm : Nom de la variable pointeur
// std::localtime() : Convertit timestamp en temps local
// &now : Adresse de la variable now