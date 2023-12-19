/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:46:35 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/19 18:46:24 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sys/time.h>
#include <ctime>
#include <sstream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

void	Account::_displayTimestamp( void )
{
    std::time_t currentTime;
    std::time(&currentTime);

    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", std::localtime(&currentTime));
	std::cout << buffer << " ";
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
     _accountIndex = _nbAccounts;
	std::cout << "index:"<< _accountIndex << ";amount:"<< initial_deposit << ";created" << "\n";
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

int  Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:";
    std::cout << _nbDeposits << ";withdrawals:" <<  _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    std::cout << "index:" << _accountIndex <<  ";p_amount:" << _amount << ";deposit:";
    _amount = _amount + deposit;
    std::cout << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (checkAmount() < withdrawal)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
        return (false);
    }
    else
    {
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
        _amount -= withdrawal;
        std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    return (true);
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}
