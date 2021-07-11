#include<iostream> // Header file
#include<string> // String header file
using namespace std;


class Train{ // Train Class

    private : // Private Properties

    int trainID;
    int capacity;
    string startTime;
    string destination;

    public : // Method
    Train();
    Train(int id, int c, string st, string d);
    void setTrainDetails(int tID, int tCapacity, string tStartTime, string des);
    void displayTrainDetails();
    void setStartTime();

};
Train ::Train(){ // Default Constructer

    trainID = 0;
    capacity = 0;
    startTime = "";
    destination ="";

   // cout << "Deafult constructer called" <<endl;
}

Train :: Train(int id, int c, string st, string d){ // Overload constructer

    trainID =id;
    capacity = c;
    startTime = st;
    destination =d;

   // cout << "Overload Train constructer called" <<endl;

}



void Train :: setTrainDetails(int tID, int tCapacity, string tStartTime, string des){ // Method call

    trainID =  tID;
    capacity = tCapacity;
    startTime = tStartTime;
    destination =  des;

    
}

void Train :: displayTrainDetails(){ // Method call

    cout << "Train ID :" <<  trainID <<endl;
    cout << "Train Capacity :" << capacity << endl;
    cout << "Train start time :" << startTime << endl;
    cout << "Destination :" << destination << endl; 
    cout << endl;

}

void Train :: setStartTime(){  // Method call

    cout << "Input new start time of train " << trainID << ":" ;
    cin >> startTime;

}

int main(){  //Main function

    Train t1;

    t1.displayTrainDetails();  // Display deafault constructer

    Train t2(0,0, "Time", "Destination"); // set overload value

    t2.displayTrainDetails();  // Display overload  constructer

    Train t[3];

    t[0].setTrainDetails(1, 200, "6.30AM", "Kandy"); // Set display train details
    t[1].setTrainDetails(2, 150, "7.30AM", "Galle"); // Set display train details
    t[2].setTrainDetails(3, 300, "4.00AM", "Jaffna"); // Set display train details

        for (int i=0; i<3; i++){ // For loop

            t[i].displayTrainDetails(); // Display set values

        }

        for(int i=0; i<3; i++){ // For loop

            t[i].setStartTime(); // Set new train time

        }

        for(int i=0; i<3; i++){ // For loop

            t[i].displayTrainDetails(); // Display new set values
        }




        return 0; // End function
}