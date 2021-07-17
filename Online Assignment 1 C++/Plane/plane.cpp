#include<iostream>
#include<string>

using namespace std;


class Plane
{

    private:

    int planeID;
    string piolet;
    string destination;

    public :

        Plane();
        Plane(int pID, string pPiolet, string des);
        void setPlaneDetails(int pID, string pPiolet, string des);
        void displayPlaneDetails();
        string getDestination();
        void setNewPioletName();
};

 Plane ::Plane()
 {
     planeID  = 0;
     piolet = "";
     destination = "";
}

 Plane ::Plane(int pID, string pPiolet, string des)
 {
     planeID =  pID;
     piolet = pPiolet;
     destination = des;
}
 void Plane::setPlaneDetails(int PID, string PPiolet, string pDes)
{
     
    planeID= PID;
    piolet =  PPiolet;
    destination = pDes;
}

void Plane :: displayPlaneDetails()
{

    cout << "PlaneID :" <<  planeID<<endl;
    cout << "Piolet :" <<  piolet <<endl;
    cout << "Destination" << destination <<endl;
    cout <<endl;
}
string  Plane :: getDestination()
{

    return destination;
}

void Plane :: setNewPioletName()
{
    cout << "Input New Piolet Name " <<  planeID <<":";
    cin >> piolet;

}

int main()
{

    Plane p1;

        p1.displayPlaneDetails(); // Display deafult constructor

    Plane p2;

        p2.setPlaneDetails(0, "Name","destina");
        p2.displayPlaneDetails();

    Plane p3[4];

        p3[0].setPlaneDetails(1, "John", "USA");
        p3[1].setPlaneDetails(2, "Gorge", "UK");
        p3[2].setPlaneDetails(3, "Henry", "USA");
        p3[3].setPlaneDetails(4, "Ronald", "UAE");

        for(int i=0; i<4; i++)
        {
            p3[i].displayPlaneDetails();
        }

        for(int i=0; i<4; i++)
        {
            p3[i].setNewPioletName();

        }

        for(int i=0; i<4; i++)
        {
            p3[i].displayPlaneDetails();

        }




    return 0;
}
