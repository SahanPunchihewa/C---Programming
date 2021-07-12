#include <iostream>
#include<string>

using namespace std;

class Vehicle{

private :

    int vehicleID;
    string vehicleBrand;
    string vehicleType;
    int VehiclePrice;


    public :

        void setVehicleDetails(int vID, string vBrand, string vType, int vPrice);
        void displayVehicleDetails();
        void setVehilcePrice();


};
void Vehicle :: setVehicleDetails(int vID, string vBrand, string vType, int vPrice){

    vehicleID = vID;
    vehicleBrand =  vBrand;
    vehicleType = vType; 
    VehiclePrice =  vPrice;

}

void Vehicle ::  displayVehicleDetails(){

    cout << "Vehicle ID :"<< vehicleID <<endl;
    cout << "Vehicle Brand :" << vehicleBrand <<endl;
    cout << "Vehicle Type :" << vehicleType << endl;
    cout << "Vehicle Price :" <<VehiclePrice << endl;
    cout << endl;

}

void Vehicle :: setVehilcePrice(){

    cout << "Input New Price of Vehicle" << vehicleID <<":";
    cin >> VehiclePrice;


}

int main(){


    Vehicle  v[3];


    v[0].setVehicleDetails(1, "Toyota", "SUV", 750000);
    v[1].setVehicleDetails(2, "Nissan", "Saloon", 850000);
    v[2].setVehicleDetails(3, "Honda", "Convertible", 650000);

        for(int i=0; i<3; i++){

            v[i].displayVehicleDetails();

        }

         for(int i=0; i<3; i++){

            v[i].setVehilcePrice();

        }

        for(int i=0; i<3; i++){

            v[i].displayVehicleDetails();

        }



    return 0;

}