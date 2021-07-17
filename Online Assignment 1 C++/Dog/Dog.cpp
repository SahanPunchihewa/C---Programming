#include<iostream> // Header file
#include<string> // Header file string

using namespace std;


class Dog{ // class

    private : // Private properties

    int dogId;
    string  dogName;
    string owner;

    public : // public objects

    void setDogDetails(int dId, string dName, string dOwner);
    void displayDogDetails();
    void setOwner();
};
void Dog :: setDogDetails(int dId, string dName, string dOwner){ // Function Implementation

     dogId =  dId;
     dogName = dName;
     owner = dOwner; 
}

void  Dog ::  displayDogDetails(){ // Function Implementation

    cout << "Dog ID :" <<   dogId << endl;
    cout << "Dog Name :" << dogName <<endl;
    cout << "Owner :" << owner <<endl; 
    cout << endl;
}

 void  Dog :: setOwner(){ // Function Implementation

     cout << "Input new owner of dog " << dogId  << ":";
     cin >> owner;


 }

 int main(){ // Main Function
 
     Dog d[3];


    d[0].setDogDetails(1, "Zimba", "Lucy"); // set Values
    d[1].setDogDetails(2, "Timmy", "Kate");
    d[2].setDogDetails(3, "Toby", "Joel");

        for(int i=0; i<3; i++){ // For loop

            d[i].displayDogDetails(); // Display set Values

        }

        for(int i=0; i<3; i++){ // For loop

            d[i].setOwner(); // Input new owner

        }

        for(int i=0; i<3; i++){ // For loop

            d[i].displayDogDetails();  // Display New owner and values

        }




     return 0; // End function
 }

