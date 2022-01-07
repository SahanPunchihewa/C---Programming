#include<iostream>
#include<string.h>
using namespace std;

class Login {

    private : 

        string UserName = "User";
        string Password = "Password";

     public :

     Login();
     Login(string UserNameAttempt, string PasswordAttempt);
     void UserLogin();
     
};

Login ::Login() {

    UserName = "";
    Password = "";

    // Default Constructor Called
}

Login ::Login(string UserNameAttempt, string PasswordAttempt) {

    UserName = UserNameAttempt;
    Password = PasswordAttempt;

    // Overload Constructor called

}

void Login :: UserLogin() {

    Cout<< "Please Enter Your User Name :";
    cin >> UserName;

    if(UserName == UserNameAttempt) {

    cout << "Please Enter Your Password :";
    cin >> Password;

        if(Password == PasswordAttempt) {

            cout << "Welcome to LightUp Electricity Cop "
        }

    }

}

int main() {

    Login login;

    




    return 0;
}
