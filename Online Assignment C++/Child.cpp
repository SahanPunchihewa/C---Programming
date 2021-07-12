#include<iostream>
#include<string>

using namespace std;

class Child{

        private : 

        int childID;
        string childName;
        string ageGroup;
        string parentName;
        int contactNo;

        public :

        Child();
        Child(int cID, string cName, string aGroup, string pName, int cNo );
        void setChildDetails(int cID, string cName,  string aGroup, string pName, int cNo);
        void displayChildDetails();
        void setContactNo();
        void displayUpdatedChildrenDetails();

}; 

Child :: Child(){

    childID = 0;
    childName = "";
    ageGroup = "";
    parentName = "";
    contactNo = 0;

}

Child :: Child(int cID, string cName, string aGroup, string pName, int cNo ){

    childID = cID;
    childName =  cName;
    ageGroup =  aGroup; 
    parentName =  pName;
    contactNo = cNo;

}

void Child :: setChildDetails(int cID, string cName,  string aGroup, string pName, int cNo){

    childID = cID;
    childName =  cName;
    ageGroup =  aGroup; 
    parentName =  pName;
    contactNo = cNo;

}



void Child :: displayChildDetails(){

    cout << "Child ID :" << childID<<endl;
    cout << "Child Name :" << childName <<endl;
    cout << "Age Group :" <<ageGroup << endl;  
    cout << "Parent Name :" << parentName << endl;
    cout << "Contact Number :" << contactNo <<endl;
    cout << endl;

}

void Child :: setContactNo(){

    cout << "Input new contact number of child" << childID << ":";
    cin >> contactNo; 
}

void Child :: displayUpdatedChildrenDetails(){

    
    cout << "Child Name :" << childName <<endl; 
    cout << "Parent Name :" << parentName << endl;
    cout << "Contact Number :" << contactNo <<endl;
    cout << endl;
}




int main(){

    Child c1;

    c1.displayChildDetails();

    Child c2(4, "Name", "Group", "Parent Name", 12345);

    c2.displayChildDetails();



    Child c[3];


    c[0].setChildDetails(1, "Oliver", "Toddler", "Bryan", 716542981);
    c[1].setChildDetails(2, "Cody", "Elder", "Joel", 776543298);
    c[2].setChildDetails(3, "Kaden", "Young", "Jesscia", 751239876);

        for(int i=0; i<3; i++){

            c[i].displayChildDetails();
        }

        for(int i=0; i<3; i++){

            c[i].setContactNo();
        }

        for(int i=0; i<3; i++){

            c[i].displayUpdatedChildrenDetails();
        }




    return 0;
}