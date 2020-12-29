#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(int id, const string &name, int age, int height) : id(id), name(name), age(age), height(height) {}

    string getFullinfo() {
        return "Name: "+name+"\nAge: "+to_string(age)+"\nHeight: "+to_string(height)+"\n";
    }

    int getId() const {
        return id;
    }

    void setId(int id) {
        Person::id = id;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Person::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Person::age = age;
    }

    int getHeight() const {
        return height;
    }

    void setHeight(int height) {
        Person::height = height;
    }


private:
    int id;
    string name;
    int age;
    int height;

};

int main() {
    Person *persons[3];
    persons[0]= new Person(0,"andrey",16,210);
    persons[1]= new Person(1,"ivan",26,170);
    persons[2]= new Person(2,"svetlana",22,160);
    for (int i=0;i<3;i++) cout<<persons[i]->getFullinfo();
    return 0;
}