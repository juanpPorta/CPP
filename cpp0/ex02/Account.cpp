/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:09:01 by jporta            #+#    #+#             */
/*   Updated: 2022/06/10 18:32:38 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <iterator>
#include <vector> 
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;	
}
int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}
int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

int	Account::checkAmount( void ) const
{
	return this->_amount;
}

Account::Account( int initial_deposit )
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	_displayTimestamp();
	this->_totalAmount += initial_deposit;
	std::cout<<"index:"<<this->_accountIndex<<";"<<"amount:"<<checkAmount()<<";"<<"created"<<std::endl;
	this->_nbAccounts++;
}



Account::~Account( void )
{
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";"<<"amount:"<<checkAmount()<<";"<<"closed"<<std::endl;	
}

void Account::_displayTimestamp()
{
	std::time_t now;
	now = time(0);
	std::tm *time = localtime(&now);
	std::cout<<"["<<time->tm_year + 1900;
	std::cout<<std::setfill('0')<<std::setw(2)<<time->tm_mon + 1;
	std::cout<<time->tm_mday<<"_";
	std::cout<<std::setfill('0')<<std::setw(2)<<time->tm_hour;
	std::cout<<std::setfill('0')<<std::setw(2)<<time->tm_min;
	std::cout<<std::setfill('0')<<std::setw(2)<<time->tm_sec<<"] ";
	
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= this->_amount)
	{
		_displayTimestamp();
		std::cout<<"index:"<<this->_accountIndex<<";";
		std::cout<<"p_amount:"<<checkAmount()<<";";
		std::cout<<"withdrawal:"<<withdrawal<<";";
		this->_amount = this->_amount - withdrawal;
		std::cout<<"amount:"<<this->_amount<<";";
		this->_nbWithdrawals++;
		std::cout<<"nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout<<"index:"<<this->_accountIndex<<";";
		std::cout<<"p_amount:"<<checkAmount()<<";";
		std::cout<<"withdrawal:"<<"refused"<<std::endl;
		return false;
	}
}

void Account::makeDeposit( int deposit )
{

	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"p_amount:"<<checkAmount()<<";";
	std::cout<<"deposit:"<<deposit<<";";
	this->_amount = this->_amount + deposit;
	std::cout<<"amount:"<<this->_amount<<";";
	this->_nbDeposits++;
	std::cout<<"nb_deposits:"<<this->_nbDeposits<<std::endl;
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";"<<"amount:"<<checkAmount()<<";"<<"deposits:"<<this->_nbDeposits<<";"<<"withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout<<"accounts:"<<getNbAccounts()<<";"<<"total:"<<getTotalAmount()<<";"<<"deposits:"<<getNbDeposits()<<";"<<"withdrawals:"<<getNbWithdrawals()<<std::endl;
}
