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


std::string getCurrentTimestamp() 
{
    std::stringstream ss;
    std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    ss << std::put_time(std::localtime(&now), "[%Y%m%d_%H%M%S]");
    return ss.str();
}
int Account::getNbAccounts(){return  _nbAccounts;}
int Account::getTotalAmount(){return _totalAmount;}
int Account::getNbDeposits(){return _totalNbDeposits;}
int Account::getNbWithdrawals(){return _totalNbWithdrawals;}
void Account::displayAccountsInfos() 
{
    std::cout<<getCurrentTimestamp()<<" accounts:"
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
    std::cout<<getCurrentTimestamp()<<" index:"
    <<_accountIndex<<";amount:"<<_amount<<"created\n";

}
void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalNbDeposits++;

}



bool	Account::makeWithdrawal( int withdrawal ){return _amount >= withdrawal ? false : true;}

int		Account::checkAmount( void )const {return _amount;}

void	Account::displayStatus( void ) const{}

void	Account::_displayTimestamp( void )
{

}







Account::~Account() {std::cout<<"destructor is called\n";}
Account::Account( void ){ std::cout<<"default constructor is called\n";} 