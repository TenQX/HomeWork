#include <iostream>
#include <string>

using namespace std;

class pet {
protected:
    string name;
    int age;
public:
    pet(string name, int age) {
        this->name = name;
        this->age = age;
    }
    pet() {}
    ~pet() {}
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return this->name;
    }
    void setAge(int age) {
        this->age = age;
    }
    int getAge() {
        return this->age;
    }
};

class parrot : private pet {
private:
    string colour;
    string secondColour;
public:
    parrot(string colour, string secondColour) {
        this->colour = colour;
        this->secondColour = secondColour;
    }
    parrot() {}
    ~parrot() {}
    void setColour(string colour) {
        this->colour = colour;
    }
    string getColour() {
        return this->colour;
    }
    void setColour(string secondColour) {
        this->secondColour;
    }
    string getSecondColour() {
        return this->secondColour;
    }
};



class cat : private pet {
private:
    string colour;
    string claws;
public:
    cat(string colour, string claws) {
        this->colour = colour;
        this->claws = claws;
    }
    cat() {}
    ~cat() {}
    void setColour(string colour) {
        this->colour = colour;
    }
    string getColour() {
        return this->colour;
    }
    void setClaws(string claws) {
        this->claws;
    }
    string getClaws() {
        return this->claws;
    }
};



class dog : private pet {
private:
    string colour;
    string fur;
public:
    dog(string colour, string fur) {
        this->colour = colour;
        this->fur = fur;
    }
    dog() {}
    ~dog() {}
    void setColour(string colour) {
        this->colour = colour;
    }
    string getColour() {
        return this->colour;
    }
    void setFur(string fur) {
        this->fur;
    }
    string getFur() {
        return this->fur;
    }
};

int main()
{
    
}
