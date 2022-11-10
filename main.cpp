#include <iostream>
#include "Menu.hpp"
using namespace std;
void Menu ();

int main() {
        Menu();
    return 0;
}

void Menu () {
    customer*ptr;
    menu m;
    ptr = &m;
    ptr -> welcome();
} 
