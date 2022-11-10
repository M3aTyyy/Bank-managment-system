#include "Menu.hpp"
#include "Customer.hpp"

void menu::display() {
    customer::display();
    cout << "I will show you a list of some services that we are offered to you." << endl;
    cout << "1- Create a Bank accout ." << endl;
    cout << "2- Depoist a money into my accout ." << endl;
    cout << "3- With draw some money from my account ." << endl;
    cout << "4- Check your Balance amount ." << endl;
    cout << "5- Show all your account details." << endl;
    cout << "6- Close my bank account ." << endl;
    cout << "7- Update my bank account ." << endl;
    cout << "Please choose the number of the operation that you want to do : ";
    int num;
    cin >> num;
        switch (num) {
            case 1:
                createBankAccount();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withDrawMoney();
                break;
            case 4:
                showBalance();
                break;
            case 5:
                accountDetails();
                break;
            case 6:
                closeAccount();
                break;
            case 7:
                updateAccount();
                break;
            default:
                break;
        }
    goodBuy();
}

void menu::welcome() {
    customer::welcome();
    cout << "Do you have an account here sir ? " << endl;
    cout << "\" y/n ?\" " << endl;
    char answer;
    cin >> answer;
    if (answer == 'y') {
        setAge(20);
        setMobileNumber("01146446721");
        setNationalID("200001");
        setAddress("Egypt");
        setAccountNumber("1000000111111");
        setBalance(100000000000);
        cout << "Enter your name please ?" << endl;
        string tempName;
        cin >> tempName;
        setName(tempName);
        cout << "Welcome , " << tempName << " ." << endl;
        display();
    }   else  if (answer == 'n') {
        createBankAccount();
    }   else {
        cout << "Wrong Entry ... enter a valid character !! " << endl;
        cin >> answer;
        if (answer == 'y') {
            setAge(20);
            setMobileNumber("01146446721");
            setNationalID("200001");
            setAddress("Egypt");
            setAccountNumber("1000000111111");
            setBalance(100000000000);
            cout << "Enter your name please ?" << endl;
            string tempName;
            cin >> tempName;
            setName(tempName);
            cout << "Welcome , " << tempName << " ." << endl;
            display();
        }   else {
            createBankAccount();
        }
    }
}

void menu::goodBuy() {
    cout << "Can i help you with anything else sir ? " << endl;
    cout << "\"y/n\"" << endl;
    char answer;
    cin >> answer;
    if (answer == 'y') {
        display();
    }   else  if (answer == 'n') {
        cout << "We are always here to serve you sir :)" << endl;
        cout << "Good bye!!" << endl;
    }
}
