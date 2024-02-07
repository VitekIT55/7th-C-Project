#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void Voice()
    {
        cout << "Создаю звук";
    }
};

class Dog : public Animal
{
public:
    virtual void Voice()
    {
        cout << "Гаф!";
    }
};

class Cat : public Animal
{
public:
    virtual void Voice()
    {
        cout << "Мяу!";
    }
};

class Fox : public Animal
{
public:
    virtual void Voice()
    {
        cout << "*кричит*";
    }
};

int main()
{
    system("chcp 1251>nul");
    Animal* A[4] = {new Animal, new Cat, new Dog, new Fox};
    for (int i = 0; i < 4; i++)
    {
        A[i]->Voice(); 
        cout << endl;
    }
}