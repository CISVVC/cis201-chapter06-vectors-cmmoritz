/*
Description: Program will store a day, amount, and description.
	It will list the daily transactions and balances. It
	will calculate balances and interest.
File: main.cpp
Author: Christina Moritz
Date: 11-8-18
*/

#include<iostream>
#include "transaction.h"
#include "transactionlog.h"

void add_transactions(Transactionlog &tlog)
{
        tlog.add_transaction(Transaction(1,1143.24,"Initial Balance"));
        tlog.add_transaction(Transaction(2,-224,"Check 2140"));
        tlog.add_transaction(Transaction(3,-193,"Check 2141"));
        tlog.add_transaction(Transaction(4,500,"ATM Deposit"));
        tlog.add_transaction(Transaction(5,-10,"Check 2142"));
        tlog.add_transaction(Transaction(6,-105,"Check 2143"));
        tlog.add_transaction(Transaction(7,-210,"Check 2144"));
        tlog.add_transaction(Transaction(8,-201,"Check 2145"));
        tlog.add_transaction(Transaction(16,1200,"ATM Deposit"));
        tlog.add_transaction(Transaction(16,-100,"Check 2146"));
        tlog.add_transaction(Transaction(17,-200,"Check 2147"));
        tlog.add_transaction(Transaction(20,900,"ATM Deposit"));
        tlog.add_transaction(Transaction(30,700,"ATM Deposit"));
}

int main()
{
        Transactionlog tlog;
        add_transactions(tlog);

        tlog.print_daily_report();

        return 0;
}
