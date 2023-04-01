// Program in C++ program to implement protected inheritance.

#include <iostream>
using namespace std;

class Account {
    public:
        string account_id;
    protected:
        string password;
};

class Email: protected Account {
    public:

        // create setter function for account_id
        void set_account_id(string aid) {
            account_id = aid;
        }
    
        // create getter function for account_id
        string get_account_id() {
            return account_id;
        }

        // create setter function for password
        void set_password(string pw) {
            password = pw;
        }
    
        // create getter function for password
        string get_password() {
            return password;
        }
};

int main() {

    // create string variables
    string acc, pw;

    // get user input
    cin >> acc >> pw;

    // create Email object email  
    Email email;

    // call set_account_id() using email object
    // pass acc as argument  
    email.set_account_id(acc);

    // call set_password()
    // pass pw as argument  
    email.set_password(pw);

    // print the class variables
    // call get_account_id() and get_password() functions
    cout << email.get_account_id() << endl;
    cout << email.get_password();
  
    return 0;
}

/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/