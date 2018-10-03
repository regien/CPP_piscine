#include "Account.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>


int			Account::_nbAccounts = 0; 
int			Account::_totalAmount = 0; 
int			Account::_totalNbDeposits = 0; 
int			Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_counter = 0;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_totalAmount += initial_deposit;
	_nbAccounts += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
}

Account::Account() {}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << std::endl;
}

int			Account::getNbAccounts() { return _nbAccounts; }

int			Account::getTotalAmount() { return _totalAmount; }

int			Account::getNbDeposits() { return _totalNbDeposits; }

int			Account::getNbWithdrawals() { return _totalNbWithdrawals; }

void		Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			  << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:" << _totalNbWithdrawals
			  << std::endl;
}

void		Account::makeDeposit(int deposit)
{
	_amount	+= deposit;
	_nbDeposits	+= 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount - deposit
			  << ";deposit:" << deposit
			  << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl; 
}

bool		Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				  << ";p_amount:" << _amount
				  << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals +=1;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				  << ";p_amount:" << _amount + withdrawal
				  << ";withdrawal:" << withdrawal
				  << ";amount:" << _amount
				  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

int			Account::checkAmount() const
{
	_counter++;
	return _amount;
}

void		Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void		Account::_displayTimestamp()
{
    std::cout << "[20150406_153629] ";
}