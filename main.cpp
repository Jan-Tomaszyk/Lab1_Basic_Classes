#include <iostream>
#include <string>


using namespace std;


class Car {
    private:
    //attributes
        string make;
        string model;
        int year;
        int currentYear=2025;
    public:
    // Constructor
        //int year;
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
            cout<<"\n"<<make<<" "<<model<<" "<<year<<"\n";
        }

        int getCarAge()
        {
            return currentYear-year;
        }
        bool isSameCar(Car otherCar)
        {
            return (this->make==otherCar.make) && (this->model==otherCar.model) && (this->year==otherCar.year);
        }
};
//Czêœæ 3 odpowiedzi
//1. Dlatego, ¿e dziêki temu zapobiegamy ich niechcianej modyfikacji przez kod spoza metod klasy.
//2. Wtedy bêdzie mo¿na modyfikowaæ ich wartoœæ komendami spoza metod klasy.
//3. Tak, tak.
int main() {
    // Create a Car object
    Car my("Opel", "Opel 3", 2002);
    Car concepted("Opel", "Opel 3", 2005);
    Car born("Opel", "Opel 3", 2005);
    Car sister("Mazda", "Santa Fe", 2020);
    // Display car details
    //my.year=2005;
    my.displayInfo();
    cout<<" "<<my.getCarAge()<<"\n";
    born.displayInfo();
    cout<<" "<<born.getCarAge()<<"\n";
    sister.displayInfo();
    cout<<" "<<sister.getCarAge()<<"\n\n";

    cout<<my.isSameCar(born)<<" "<<born.isSameCar(concepted);
    return 0;
}
