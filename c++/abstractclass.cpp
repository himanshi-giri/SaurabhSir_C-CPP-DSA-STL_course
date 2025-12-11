#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
    virtual void move() = 0;
    void eat()
    {
        cout << "All animals eat food\n";
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dogs Bark\n";
    }
    void move() override
    {
        cout << "Dogs run\n";
    }
    void play()
    {
        cout << "Dogs do play\n";
    }
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "cats Bark\n";
    }
    void move() override
    {
        cout << "cat walk\n";
    }
    void sleep()
    {
        cout << "cats sleep\n";
    }
};

int main()
{
    Animal *ptr = new Dog;
    ptr->eat();
    ptr->sound();
    ptr->move();
}