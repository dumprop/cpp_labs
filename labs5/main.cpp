#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vehicle {
public:
    Vehicle(int height, int width, int length) : height(height), width(width), length(length) {}

    virtual string getFullinfo(){}
    int getHeight() const {
        return height;
    }

    void setHeight(int height) {
        Vehicle::height = height;
    }

    int getWidth() const {
        return width;
    }

    void setWidth(int width) {
        Vehicle::width = width;
    }

    int getLength() const {
        return length;
    }

    void setLength(int length) {
        Vehicle::length = length;
    }

protected:
    int height;
    int width;
    int length;
};

class Truck : public Vehicle {//грузовик
public:
    Truck(int height, int width, int length, const string &truckBody) : Vehicle(height, width, length),
                                                                        truckBody(truckBody) {}

    string getFullinfo(){
        return "height: "+to_string(height)+"\nwidth: "+to_string(width)+"\nlength "+to_string(length)+"\nКузов: "+truckBody+"\n";
    }
    const string &getTruckBody() const {
        return truckBody;
    }

    void setTruckBody(const string &truckBody) {
        Truck::truckBody = truckBody;
    }

private:
    string truckBody; //описание кузова
};


class Car : public Vehicle {
public:

    Car(int height, int width, int length, int carBodyPeopleSize) : Vehicle(height, width, length),
                                                                    carBodyPeopleSize(carBodyPeopleSize) {}

    void ride(){}
     string getFullinfo(){
         return "height: "+to_string(height)+"\nwidth: "+to_string(width)+"\nlength "+to_string(length)+"\nVlezet: "+to_string(carBodyPeopleSize)+" людей\n";
    }

    int getCarBodyPeopleSize() const {
        return carBodyPeopleSize;
    }

    void setCarBodyPeopleSize(int carBodyPeopleSize) {
        Car::carBodyPeopleSize = carBodyPeopleSize;
    }

private:
    int carBodyPeopleSize; //вместимость машины (людей)
};


int main() {
//    Vehicle *vehicles[5];
//    vehicles[0]=new Truck(234,356,825,"продуктовый");
//    vehicles[1]=new Truck(234,356,825,"продуктовый");
//    vehicles[2]=new Truck(234,356,825,"продуктовый");
//    vehicles[3]=new Truck(234,356,825,"продуктовый");
//    vehicles[4]=new Car(938,346,846,6);
    vector<Vehicle*> vehicles;
    vehicles.push_back(new Truck(234,356,825,"продуктовый"));
    vehicles.push_back(new Truck(753,735,930,"мусоровоз"));
    vehicles.push_back(new Car(230,345,355,2));
    vehicles.push_back(new Car(234,923,321,4));
    vehicles.push_back(new Car(938,346,846,6));

    int gruzoviki = 0;
    int cars = 0;
    for(auto p : vehicles)
    {
        cout<<p->getFullinfo();
        if (typeid(*p) == typeid(Truck)) {
            gruzoviki+=1;
        } else if (typeid(*p) == typeid(Car)) {
            cars+=1;
        }
    }
    cout<<"gruzoviki"<<gruzoviki<<" cars " << cars;


    return 0;
}