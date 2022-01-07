#include<iostream> // iostream Headerfile
#include<string> // String Headerfile
using namespace std; // pre-fix for std

class Login { // Login Class
 
    public : // Public Properties

    string UserNameAttempt; 
    string PasswordAttempt;
    Login() {

        accessGranted = 0;

    }

    void LoginUser() { // Methods

        cout << "Welcome to LightUp Electricity Coporation...!!!" << endl;
        cout << "-----------------------------------------------" << endl;
        cout <<endl;

        cout << "Please Enter Your User Name :";
        cin >> UserNameAttempt;
            if(UserNameAttempt == UserName) {

                    cout << "Please Enter Your Password :";
                    cin >> PasswordAttempt;
                    if(PasswordAttempt == Password) {

                        cout << "Login Successful...!!!" << endl;
                    }
                    else {

                        cout << "Login Failed...!!!" << endl;
                    }
     } 
        
    }

    private : // Private Properties

        string Password = "Password";
        string UserName = "UserName";
        bool accessGranted;


};

class Register { // Class Register

    private : // Private Properties

    string AccountNumber;
    string Name;
    string Address;
    int TelephoneNumber;

    public : // Public Properties

    Register() {

        AccountNumber = "";
        Name = "";
        Address = "";
        TelephoneNumber = 0;

    }
    Register(string accNumber, string name, string address, int telephone) {

        AccountNumber = accNumber;
        Name = name;
        Address = address;
        TelephoneNumber = telephone;
    }

    void UserRegister() { // Methhos

        cout <<"User Registration" << endl;
        cout << "--------------------------------" << endl;
        cout <<endl;

        cout << "Enter Your Account Number :";
        cin >> AccountNumber;

        cout << "Enter Your Name :";
        cin >> Name;

        cout <<"Enter Your Address :";
        cin >> Address;

        cout << "Enter Your Telephone Number :";
        cin >> TelephoneNumber;
        cout << endl;
        cout << endl;

        cout << "Successfully Registered...!!!" << endl;


    }

    void Display(){ // methods

        cout << "Account Number :" << AccountNumber << endl;
        cout << "Name :" << Name << endl;
        cout << "Address :" << Address << endl;
        cout << "Telephone Number :" << TelephoneNumber << endl;

    }

};

int main() { // Main Method

    char choice; // Variable

    Login l;
    l.LoginUser(); // Method call

    cout << "Do you want Continue? (Y/N)"; // Continue or not
    cin >> choice;
    cout << endl;

    if(choice == 'Y' || choice == 'y') { // condition

        Register r;
        r.UserRegister();
        r.Display();

    }
    else { // condition

        cout << "Thank You...!!!" << endl;
    }

    cout << "Do you want Display Details? (Y/N)"; // Display Details or not
    cin >> choice;
    cout << endl;

     if(choice == 'Y' || choice == 'y') { // condition

        Register r;
        r.Display(); // Method Call

    }
    else {

        cout << "Thank You...!!!" << endl;
    }



    return 0; // End of Main Method


}