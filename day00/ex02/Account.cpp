/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-24 19:45:03 by sessarhi          #+#    #+#             */
/*   Updated: 2024-09-24 19:45:03 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts(){return  _nbAccounts;}
int Account::getTotalAmount(){return _totalAmount;}
int Account::getNbDeposits(){return _totalNbDeposits;}
int Account::getNbWithdrawals(){return _totalNbWithdrawals;}
void Account::displayAccountsInfos() 
{}
Account::Account(int initial_deposit)
{
    
}
Account::~Account()
{

}
void Account::makeDeposit(int deposit){}

bool	Account::makeWithdrawal( int withdrawal ){}

int		Account::checkAmount( void )const {}
void	Account::displayStatus( void ) const{}
void	Account::_displayTimestamp( void ){}
Account::Account( void ){}