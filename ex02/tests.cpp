// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t;//vecteur contenant les comptes
	typedef std::vector<int>								  ints_t;//vecteurs contenant les entiers
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;//alias pour une paire d iterateur un pour les comptes et un pour les montants

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };//tableau de 8 montants
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );//calculer le nbre d elements dans les tableaux
	accounts_t				accounts( amounts, amounts + amounts_size );//cree un vecteur de comptes en utilisant les montant, chaque element du tableau devient un nouveau compte
	accounts_t::iterator	acc_begin	= accounts.begin();//iterateur pour le debut des comptes
	accounts_t::iterator	acc_end		= accounts.end();//iterateur pour la fin des comptes

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };//tableau de 8 depots
	size_t const		d_size( sizeof(d) / sizeof(int) );//calculer le nbre d element dans le tableau
	ints_t				deposits( d, d + d_size );//cree un vecteur de depots
	ints_t::iterator	dep_begin	= deposits.begin();//iterateur pour le debut
	ints_t::iterator	dep_end		= deposits.end();//iterateur pour la fin

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };//tableau de 8 retrait
	size_t const		w_size( sizeof(w) / sizeof(int) );//le nbre d element dans le tableau
	ints_t				withdrawals( w, w + w_size );//vecteur de retrait
	ints_t::iterator	wit_begin	= withdrawals.begin();//iterateur debut
	ints_t::iterator	wit_end		= withdrawals.end();//iterateur fin

	Account::displayAccountsInfos();//ma fonction pour afficher les infos de tous les comptes
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );//parcourt chaque compte et appelle display status pour chacun

	for ( acc_int_t it( acc_begin, dep_begin );//boucle qui parcourt simultanement les comptes et les montants
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {
//it_first pointe sur le compte actuel it.second pointe sur le montant correspondant
		(*(it.first)).makeDeposit( *(it.second) );//fait u depot sur le compte actuel avec le montant correspondant
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );//boucle qui parcourt simultanement les comptes et les retraits
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
