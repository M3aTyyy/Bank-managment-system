#include "Customer.hpp"
#include "Menu.hpp"

int customer::count = 0;

customer::customer() {
    cout << "Good Morning" << endl;
    count++;
}

customer::customer(string n, string mN, int a, string id, string aD, string aN):name(n),mobileNumber(mN),age(a),nationalID(id),address(aD),accountNumber(aN) {
       cout << "The Paramatrized constructor" << endl;
       count++;
}

void customer::setName(string n) {
    name = n;
}

void customer::setMobileNumber(string mN) {
    mobileNumber = mN;
}
void customer::setAge(int a) {
    age = a;
}

void customer::setNationalID(string id) {
    nationalID = id;
}

void customer::setAddress(string aD) {
    address = aD;
}

void customer::setAccountNumber(string aN) {
    accountNumber = aN;
}

string customer::getName() {
    return name;
}

string customer::getMobileNumber() {
    return mobileNumber;
}

int customer::getAge() {
    return age;
}

string customer::getNationalID() {
    return nationalID;
}

string customer::getAddress() {
    return address;
}

string customer::getAccountNumber() {
    return accountNumber;
}

int customer::getCount() {
    return count;
}

void customer::display() {
    cout << "We are here to help & serve you in our bank any time :)" << endl;
}

void customer::welcome() {
    cout << "Welcome sir in the CIB :) " << endl;
}
