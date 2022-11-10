#include "Account.hpp"

long long account::getBalance () {
    return balance;
}

void account::setBalance(long long b) {
    balance = b;
}

void account::createBankAccount() {
    cout << "Create a bank account " << endl;
    cout << "We will fill some details and after that the account will be created ." << endl;
    string name,number, ssd, address;
    int age;
    cout << "Enter please your \" Name , Age , Phone number , National SSN, Address \" : " << endl;
    cin >> name >> age >> number >> ssd >> address;
    setName(name);
    setAge(age);
    setMobileNumber(number);
    setNationalID(ssd);
    setAddress(address);
    setAccountNumber("10000982435");
    cout << "Done sir your account was created and here your account information :) " << endl;
    cout << "Name : " << getName() << endl << "Age : " << getAge() << endl << "Number : " << getMobileNumber() << endl << "National ID :"  << getNationalID() << endl << "Address : " << getAddress() << endl << "With account number : " << getAccountNumber() << endl;
    cout << "Please enter the amount of money that you want to open your account with ..." << endl;
    long long money;
    cin >> money;
    if (money < 0) {
        cout << "You can't start an account with a negative number !!" << endl;
        cout << "Enter a positive amount .... " << endl;
        cin >> money;
        if (money < 0) {
            cout << "Please enter a positive number !!!" << endl;
            cin >> money;
            setBalance(money);
            cout << "Done your account was opened with amount of " << getBalance() << " ." << endl;
        }
    }   else   {
        setBalance(money);
        cout << "Done your account was opened with amount of " << getBalance() << " ." << endl;
    }
    cout << "Do you want to edit any thing sir or you want to show you our services ?" << endl;
    cout << "\" y/n \"" << endl;
    char answer;
    cin >> answer;
    if (answer == 'y') {
        updateAccount();
        display();
    }   else if (answer == 'n')    {
        cout << "Okay sir :)" << endl;
        display();
    }   else    {
        cout << "Enter a valid answer !!" << endl;
        cin >> answer;
        if (answer == 'y') {
            updateAccount();
            display();
        }   else    {
            display();
        }
    }
}

void account::depositMoney() {
    cout << "Enter the Money that you want to add to your account : ";
    int money;
    cin >> money;
    balance += money;
    setBalance(balance);
    cout << "Your account balance become : " << getBalance() << endl;
}

void account::withDrawMoney() {
    cout << "Enter how much money you want to withdraw : ";
    int WD;
    cin >> WD;
    balance -= WD;
    cout << "You have withdraw " << WD << " from your account and the new balance is : " << getBalance() << endl;
}

void account::showBalance() {
    cout << "Your Balance now is " << balance << endl;
}

void account::accountDetails() {
    cout << "One second sir!" << endl;
    // Ana 3arft el constructor hena bsbb el method deh
    cout << "Name : " << getName() << endl << "Age : " << getAge() << endl << "Number : " << getMobileNumber() << endl << "National ID : "  << getNationalID() << endl << "Address : " << getAddress() << endl << "With account number : " << getAccountNumber() << endl << "Current account balance = " << getBalance() << endl;
}

void account::closeAccount() {
    cout << "Account closed :( " << endl;
    setName(" ");
    setMobileNumber(" ");
    setAge(0);
    setNationalID(" ");
    setAccountNumber(" ");
    setBalance(0);
    cout << "We wish to see you again here sir ." << endl;
}

void account::updateAccount() {
    cout << "Welcome customer choose the number of the operation that you want to edit :) " << endl;
    cout << "1- Name , " << "2- Mobile number , " <<"3- Age , " <<"4- National ID , " <<"5- Address . " << endl;
    cout << "Enter the number : ";
    char answer;
    cin >> answer;
    if (answer == '1') {
        cout << "What is the new name that you want to edit ?" << endl;
        string newName;
        cin >> newName;
        setName(newName);
        cout << "Done sir it was updated." << endl;
    }   else if (answer == '2') {
        cout << "Enter the new number : ";
        string newMobileNumber;
        cin >> newMobileNumber;
        setMobileNumber(newMobileNumber);
        cout << "Done sir it was updated." << endl;
    }   else if (answer == '3') {
        cout << "Enter the new Age : ";
        int newAge;
        cin >> newAge;
        setAge(newAge);
        cout << "Done sir it was updated." << endl;
    }   else if (answer == '4') {
        cout << "Enter the correct national ID : ";
        string newNationalID;
        cin >> newNationalID;
        setNationalID(newNationalID);
        cout << "Done sir it was updated." << endl;
    }   else if (answer == '5') {
        cout << "Enter the new address : ";
        string newAddress;
        cin >> newAddress;
        setAddress(newAddress);
        cout << "Done sir it was updated." << endl;
    } 
}
