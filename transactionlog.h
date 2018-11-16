#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H
#include<vector>
#include "transaction.h"

class Transactionlog
{
        std::vector<Transaction> m_transactions;

public:
        void add_transaction(const Transaction &transaction);
        std::vector<double> daily_balances();
        double get_transaction_totals_for_day(int day);
        void print_daily_report();
        void print_transactions_for_day(int day);
        double get_average_balance(const std::vector<double> &balances);
};

#endif
