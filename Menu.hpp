#ifndef Menu_hpp
#define Menu_hpp
#include "Account.hpp"
#include "Customer.hpp"

#include <iostream>
using namespace std;

class menu : public account {
private:
    
public:
    void display ();
    void welcome ();
    void goodBuy ();
};

#endif /* Menu_hpp */
