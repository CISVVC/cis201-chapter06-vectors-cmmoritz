#include<iostream>
#include<string>
#include "transaction.h"

Transaction::Transaction(int day,double amount,std::string description)
{
        m_day = day;
        m_amount = amount;
        m_description = description;
}

int Transaction::get_day()
{
        return m_day;
}

double Transaction::get_amount()
{
        return m_amount;
}

std::string Transaction::get_description()
{
        return m_description;
}
