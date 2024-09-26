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
#include <chrono>
#include <string>
#include <sstream>
#include <time.h>
#include<iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(){return  _nbAccounts;}
int Account::getTotalAmount(){return _totalAmount;}
int Account::getNbDeposits(){return _totalNbDeposits;}
int Account::getNbWithdrawals(){return _totalNbWithdrawals;}
void Account::displayAccountsInfos() 
{
    _displayTimestamp();
    std::cout<<"accounts:"
    <<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"
    <<_totalNbDeposits<<":withdrawals:"
    <<_totalNbWithdrawals<<std::endl;
}
Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount+=initial_deposit;
    _nbWithdrawals=0;
    _nbDeposits=0;
    _displayTimestamp();
    std::cout<<"index:"
    <<_accountIndex<<";amount:"<<_amount<<";created\n";

}
void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout
    <<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";deposit:"<<deposit
    <<";amount:"<<_amount+deposit<<";nb_deposits:"<<_nbDeposits<<std::endl;
    _amount+=deposit;
    _totalAmount+=deposit;
}



bool	Account::makeWithdrawal( int withdrawal )
{
   if (_amount >= withdrawal)
   {
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _displayTimestamp();
     std::cout
     <<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal
     <<";amount:"<<_amount-withdrawal<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
     _amount-=withdrawal;
     _totalAmount-=withdrawal;
     return true;
    
   }
    _displayTimestamp();
    std::cout
    <<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<"refused\n";
    return false;
}


void	Account::displayStatus( void ) const
{
  _displayTimestamp();
  std::cout
    <<"index:"<<_accountIndex<<";amount:"<<_amount<<";deposit:"<<_nbDeposits
    <<";withdrawals:"<<_nbWithdrawals<<std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::stringstream ss;
    std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    ss << std::put_time(std::localtime(&now), "[%Y%m%d_%H%M%S]");
    std::cout<<ss.str()<<" ";
}

int		Account::checkAmount( void )const {return _amount;}
Account::~Account() 
{
     _displayTimestamp();
    std::cout<<"index:"
    <<_accountIndex<<";amount:"<<_amount<<";closed\n";
}
Account::Account( void ){ std::cout<<"default constructor is called\n";} 