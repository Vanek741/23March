#include <iostream>


class Human {

public:

    int howOld;
    bool isAlive = true;
    bool isLoveDog = false;

};


class Dog {

public:

    int howOld;
    bool isAlive = true;
    bool isLoveHuman = false;

};


int main() {

    Human human;

    if (human.howOld > 105 || human.howOld < 0) {
        human.isAlive = false;
    }

    Dog dog;

    if (dog.howOld > 105 || dog.howOld < 0) {
        dog.isAlive = false;
    }

    if ((human.isAlive = true) && (dog.isAlive = true)) {
     human.isLoveDog = true;
     dog.isLoveHuman = true;
    }

}