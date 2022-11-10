#ifndef Customer_hpp
#define Customer_hpp

#include <iostream>
using namespace std;

class customer {
private:
    string name;
    string mobileNumber;
    int age;
    string nationalID;
    string address;
    string accountNumber;
    static int count;
public:
    customer();
    customer(string n, string mN, int a, string id, string aD, string aN);
    void setName (string n);
    void setMobileNumber (string mN);
    void setAge (int a);
    void setNationalID (string id);
    void setAddress (string aD);
    void setAccountNumber (string aN);
    string getName ();
    string getMobileNumber();
    int getAge ();
    string getNationalID ();
    string getAddress ();
    string getAccountNumber ();
    int getCount ();
    virtual void display ();
    virtual void welcome ();
};

#endif /* Customer_hpp */
