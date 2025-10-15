#include <iostream>
#include <string>


using namespace std;


class Car {
    private:
    //attributes
        string make;
        string model;
        int year;
    public:
    // Constructor
        Car (string mak, string mod, int y)
        {
            make=mak;
            model=mod;
            year=y;
        }
        ~Car(){}
    // Method to display car information
        void displayInfo()
        {
            cout<<make<<" "<<model<<" "<<year<<"\n";
        }
};

int main() {
    // Create a Car object
    Car my("Opel", "Opel 3", 2002);
    // Display car details
    my.displayInfo();


    return 0;
}
