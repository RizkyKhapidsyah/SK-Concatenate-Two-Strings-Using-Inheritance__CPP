#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class base {

protected:
    virtual string concatenate(string& a, string& b) = 0;
};

class myString : protected base {

public:

    string concatenate(string& a, string& b) {
        string temp;
        temp = a + b;
        return temp;
    }

};

int main() {
    string a, b;

    cout << "\n Enter first string: ";
    cin >> a;
    cout << "\n Enter second string: ";
    cin >> b;

    myString obj;

    cout << "\n concatenate string : " << obj.concatenate(a, b);

    _getch();
    return 0;
}