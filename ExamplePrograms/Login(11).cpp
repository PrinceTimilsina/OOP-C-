#include <iostream>
#include <string>
using namespace std;
int main() {
    string savedUsername = "admin";
    string savedPassword = "login";
    string inputUsername;
    string inputPassword;

    cout << "Enter username: ";
    cin >> inputUsername;
    cout << "Enter password: ";
    cin >> inputPassword;
    if (inputUsername == savedUsername) {
        if (inputPassword == savedPassword) {
            cout << "Login successful!" << endl;
        } else {
            cout << "Incorrect password!" << endl;
        }
    } else {
        cout << "Incorrect username!" << endl;
    }
    return 0;
}
 
