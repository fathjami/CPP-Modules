#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account:: _nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

void	Account ::_displayTimestamp( void )
{
    time_t result = time(NULL);

    std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&result)->tm_year
                << std::setw(2) << 1 + std::localtime(&result)->tm_mon
                <<  std::setw(2) << std::localtime(&result)->tm_mday
                <<  "_"
                <<  std::setw(2) << std::localtime(&result)->tm_hour
                <<  std::setw(2) << std::localtime(&result)->tm_min
                <<  std::setw(2) << std::localtime(&result)->tm_sec 
                << "] ";
}

Account:: Account(int initial_deposit)
{
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std:: cout<< " index:" << _accountIndex << ";amount:" << _amount << ":created" << std:: endl;
}

Account:: ~Account()
{
    _displayTimestamp();
    std:: cout<< " index:" << _accountIndex << ";amount:" << _amount << ":closed" << std:: endl;
}

void Account:: displayAccountsInfos()
{
    _displayTimestamp();
    std:: cout << " accounts:" << getNbAccounts()<< ";total:" << getTotalAmount() << ";deposits:"\
    << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std:: endl; 
}

void Account:: displayStatus() const
{
     _displayTimestamp();
    std:: cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:"\
    << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std:: endl;
}

int Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int Account::getTotalAmount( void ) {
    return _totalAmount;
}

int Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void Account:: makeDeposit(int deposit)
{
    _displayTimestamp();
    std:: cout<< " index:" << _accountIndex << ";p_amount:" << _amount;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
    _nbDeposits += 1;
    std:: cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits\
    << std:: endl;
}

bool Account:: makeWithdrawal(int withdrawal)
{
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std:: cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawals: refused" << std:: endl;
        return (false);
    }
    else
    {
        _displayTimestamp();
        std:: cout<< " index:" << _accountIndex << ";p_amount:" << _amount;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals += 1;
        _nbWithdrawals += 1;
        std:: cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals\
        << std:: endl;
    }
    return (true);
}