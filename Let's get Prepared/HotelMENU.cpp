#include<iostream>
using namespace std;
int main() {
    int momo, noodles, thakalikhana, pizza, qty, mp = 100, np = 60, tp = 250, pip = 100, amt, ch;
    cout << "-------------------------Welcome to PRINCE.T CAFE, Here's the MENU:-------------------------" << endl;
    cout<<"------------------------------------------Main ITEMS---------------------------------------------"<<endl;
	cout << "1. MOMO" << endl;
    cout << "2. Noodles" << endl;  
    cout << "3. Thakali Khaja" << endl;
    cout << "4. Pizza" << endl;
    cout << "What would you like to get? Pick (1-4)" << endl; 
    cin >> ch;
    cout << "Enter Quantity: ";
    cin >> qty;

    switch(ch) {
        case 1: {
            amt = qty * mp;
            cout << "Your total BILL is:RS " << amt<<endl;
            break;
        }
        case 2: {
            amt = qty * np;
            cout << "Your total BILL is:RS " << amt<<endl;
            break;
        }
        case 3: {
            amt = qty * tp;
            cout << "Your total BILL is:RS " << amt<<endl;
            break;
        }      
        case 4: {
            amt = qty * pip;
            cout << "Your total BILL is:RS " << amt<<endl;
            break;
        }
        default: {
            cout << " SORRY ! Wrong Choice!";
            break;
        }
    }
    cout<<"Thankyou For Arriving Here!";

    return 0;
}
