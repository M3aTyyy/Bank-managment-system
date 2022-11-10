#ifndef Account_hpp
#define Account_hpp
#include "Customer.hpp"

#include <iostream>
using namespace std;

class account : public customer {
private:
    long long balance;
public:
    // create a default constructor with paramters passed with child class paramater
    long long getBalance ();
    void setBalance (long long b);
    void createBankAccount ();
    void depositMoney ();
    void withDrawMoney ();
    void showBalance ();
    void accountDetails ();
    void closeAccount ();
    void updateAccount ();
};

#endif /* Account_hpp */
