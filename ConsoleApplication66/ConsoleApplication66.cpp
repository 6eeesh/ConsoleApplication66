#include <string>
#include<iostream>
using std::string;
using namespace std;

class Animal {
public:
    Animal(const string& name, double weight, const string& continent)
        : name(name), weight(weight), continent(continent) {}

    virtual void Eat() = 0;
    virtual void Sleep() = 0;
    virtual void Move() = 0;
    virtual void MakeSound() = 0;

protected:
    string name;
    double weight;
    string continent;
};

class ISwimable {
public:
    virtual void Swim() = 0;
};

class IFlyable {
public:
    virtual void Fly() = 0;
};

class Cat : public Animal {
public:
    Cat(const string& name, double weight, const string& continent)
        : Animal(name, weight, continent) {}

    void Eat() override {
        cout << "Начал чавкать" << endl;
    }
    void Sleep() override {
        cout << "Смотрит десятые сны" << endl;
    }
    void Move() override {
        cout << "Начал пересталять ножки" << endl;
    }
    void MakeSound() override {
        cout << "Начал гавкать" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(const string& name, double weight, const string& continent)
        : Animal(name, weight, continent) {}

    void Eat() override {
        cout << "Начал чавкать" << endl;
    }
    void Sleep() override {
        cout << "Смотрит десятые сны" << endl;
    }
    void Move() override {
        cout << "Начал пересталять ножки" << endl;
    }
    void MakeSound() override {
        cout << "Начал гавкать" << endl;
    }
};

class Parrot : public Animal, public IFlyable {
public:
    Parrot(const string& name, double weight, const string& continent)
        : Animal(name, weight, continent) {}

    void Eat() override {
        cout << "Начал чавкать" << endl;
    }
    void Sleep() override {
        cout << "Смотрит десятые сны" << endl;
    }
    void Move() override {
        cout << "Начал пересталять ножки" << endl;
    }
    void MakeSound() override {
        cout << "Начал гавкать" << endl;
    }
    void Fly() override {
        cout << "Начал махать крыльями" << endl;
    }
};

class Duck : public Animal, public ISwimable, public IFlyable {
public:
    Duck(const string& name, double weight, const string& continent)
        : Animal(name, weight, continent) {}

    void Eat() override {
        cout << "Начал чавкать" << endl;
    }
    void Sleep() override {
        cout << "Смотрит десятые сны" << endl;
    }
    void Move() override {
        cout << "Начал пересталять ножки" << endl;
    }
    void MakeSound() override {
        cout << "Начал гавкать" << endl;
    }
    void Swim() override {
        cout << "Начал плыть" << endl;
    }
    void Fly() override { 
        cout << "Махает крыльями" << endl;
    }
};

int main() {
    // Тут можна створювати об'єкти класів та викликати їхні методи
    return 0;
}