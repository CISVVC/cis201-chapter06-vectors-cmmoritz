#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
        int m_day;
        double m_amount;
        std::string m_description;

public:
        Transaction(int day,double amount,std::string description);
        int get_day();
        double get_amount();
        std::string get_description();
};

#endif
