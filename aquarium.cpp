#include <iostream>
#include <string>
#include <Windows.h>
#include <list>

#pragma execution_character_set("utf-8")

using namespace std;


struct Fish {
    string Type;
    int Hunger;
    int Size;
    int Danger;
    int Age;


    Fish(string Type, int Hunger, int Size, int Danger, int Age) {
        this->Type = Type;
        this->Hunger = Hunger;
        this->Size = Size;
        this->Danger = Danger;
        this->Age = Age;
    }

};


class Fishes {

private:
    int count;
    char fishTypes[7][50]{ "золотая рыбка", "гуппи", "сомик", "меченосец", "пиранья", "неон" };
    Fish** fishes;

public:
    
    Fishes(int size) {
        count = 0;
        fishes = new Fish * [size];
    }

    void FishAdd(Fish* k) {
        fishes[count++] = k;
    }

    void FishGeneration() {
        int RandType = rand() % 6 + 1;
        string ThisFishType = fishTypes[RandType];
        int hunger = 0;

        int weight;
        if (RandType == 1) {
            weight = 20;
        }
        if (RandType == 2) {
            weight == 10;
        }
        if (RandType == 3) {
            weight == 40;
        }
        if (RandType == 4) {
            weight == 5;
        }
        if (RandType == 5) {
            weight == 500;
        }

        int danger;
        if (RandType == 3) {
            danger == 1;
        }
        if (RandType == 5) {
            danger == 2;
        }
        else {
            danger == 0;
        }

        int age = 1;

        Fish* newfish = new Fish (ThisFishType, hunger, weight, danger, age);

    }
};

int main()
{
    int number;
    number = 50;
    Fishes AliveFishes(number);
}


