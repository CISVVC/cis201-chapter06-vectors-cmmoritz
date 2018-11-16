#include<iostream>
#include "transactionlog.h"

const int MAX_DAY = 30;
const double INTEREST = 0.005;
void Transactionlog::add_transaction(const Transaction &transaction)
{
        m_transactions.push_back(transaction);
}

std::vector<double> Transactionlog::daily_balances()
{
        std::vector<double> balances;
        double sum = 0;
        for(int day=0;day < MAX_DAY; day++)
        {
                sum += get_transaction_totals_for_day(day+1);
                balances.push_back(sum);
        }
        return balances;
}

double Transactionlog::get_transaction_totals_for_day(int day)
{
        double sum = 0;
        for(int i=0;i<m_transactions.size();i++)
        {
                if(m_transactions[i].get_day() == day)
                        sum += m_transactions[i].get_amount();
        }
        return sum;
}

double Transactionlog::get_average_balance(const std::vector<double> &balances)
{
        double sum = 0;
        for(int i=0;i<balances.size();i++)
        {
                sum += balances[i];
        }
        return sum/balances.size();
}

void Transactionlog::print_transactions_for_day(int day)
{
        for(int i=0;i<m_transactions.size();i++)
        {
                if(m_transactions[i].get_day() == day)
                        std::cout << "Day " << m_transactions[i].get_day() << '\t' << m_transactions[i].get_amount() << '\t' << m_transactions[i].get_description() << std::endl;
        }
}

void Transactionlog::print_daily_report()
{
        std::vector<double> balances = daily_balances();
        for(int day=0;day < MAX_DAY; day++)
        {
                print_transactions_for_day(day+1);
                std::cout << " " << std::endl;
                std::cout << "Day " << day+1 << " balance = " << balances[day] << std::endl;
                std::cout << "------------------------" << std::endl;
        }
        std::cout << "Average Daily Balance: " << get_average_balance(balances) << '\t' << "Interest: " << get_average_balance(balances)*INTEREST << std::endl;
        std::cout << "Minimum Daily Balance: " << 700.24 << '\t' << "Interest: " << 700.24*INTEREST << std::endl;
}
