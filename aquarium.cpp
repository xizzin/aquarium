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

    void AgeProgress() {
        this->Age = Age + 1;
    }

};


class Fishes {

private:
    int count;

    Fish** fishes;

public:

    Fishes(int size) {
        count = 0;
        fishes = new Fish * [size];
    }


    void FishAdd(Fish* k) {
        fishes[count++] = k;
    }

    string InformationType(int num) {
        fishes[num]->Type;
    }
    int InformationHunger(int num) {
        fishes[num]->Hunger;
    }
    int InformationAge(int num) {
        fishes[num]->Age;
    }
    void Birth(int num, int numtwo) {
    }
    void AgeAdd(int num) {
        fishes[num]->AgeProgress();
    }
};

struct AlgaeandFood {
    int Danger;
    int Sustainability;

    AlgaeandFood(int Danger, int Sustainability) {
        this->Danger = Danger;
        this->Sustainability = Sustainability;
    }
};


class Algaes {

private: 
    int count;
    AlgaeandFood** algaes;

public:
    Algaes(int sizetwo) {
        count = 0;
        algaes = new AlgaeandFood * [sizetwo];
    }

    void AlgaeAdd(AlgaeandFood* k) {
        algaes[count++] = k;
    }
};

class Aquarium {

private: 
    int count;
public:

    void Interaction(int idone, int idtwo) {

    }
    
};


void main()
{
    int number;
    number = 50;
    Fishes AliveFishes(number);
    int num;
    int numbertwo;
    numbertwo = 50;
    Algaes AliveAlgae(numbertwo);
    //char fishTypes[7][50]{ "Золотая рыбка", "гуппи", "сомик", "меченосец", "пиранья", "неон" };


    //показ инфо данного хода аквариума
    //возможные действия с аквариумом
    //ход аквариума

    
    cout << "Добро пожаловать в аквариум! " << endl;

    int ActionChoice;

    cin >> ActionChoice;

    switch (ActionChoice) {
    //ДОБАВЛЕНИЕ РЫБЫ
    case 1: {
        cout << "Введите номер типа рыбы: \n1.Меченосец\n2.Гуппи\n3.Неон\n4.Золотая рыбка\n5.Сом\n6.Пиранья" << endl;
        int typeChoice;
        int dangerType;
        string typeString;
        int sizeType;
        cout << "\nВведите цифру номера типы рыбы: " << endl;
        cin >> typeChoice;
        //проверка на то что было введено именно число (ака что данные принялись в переменную)
        //вынести в отдельную функцию??
        while (!(cin >> typeChoice) || !(0 < typeChoice < 7)) {
            cout << "\nВы ввели не номер или номер, который не был написан. Попытайтесь ввести номер типа для рыбы еще раз" << endl;
            cout << "\nВведите цифру номера типы рыбы: " << endl;
            cin >> typeChoice;
        }
        if (typeChoice == 1) {
            dangerType = 1;
            typeString == "Меченосец";
            sizeType == 20;
        }
        if (typeChoice == 2) {
            dangerType = 1;
            typeString == "Гуппи";
            sizeType == 10;
        }
        if (typeChoice == 3) {
            dangerType = 1;
            typeString == "Неон";
            sizeType == 5;
        }
        if (typeChoice == 4) {
            dangerType = 1;
            typeString == "Золотая рыбка";
            sizeType == 10;
        }
        if (typeChoice == 5) {
            dangerType = 2;
            typeString == "Сом";
            sizeType == 40;
        }
        if (typeChoice == 6) {
            dangerType = 3;
            typeString == "Пиранья";
            sizeType == 500;
        }

        int hunger = 1;
        int age = 1;

        Fish* newfish = new Fish(typeString, hunger, sizeType, dangerType, age);
        AliveFishes.FishAdd(newfish);
        break;
    }
    //ДОБАВЛЕНИЕ ЕДЫ
    case 2: {
        cout << "Введите количество водорослей, которое вы хотите добавить: " << endl;
        int num;
        cin >> num;
        while (!(cin >> num)) {
            cout << "\nВы ввели не номер или номер в неправильном виде. Попытайтесь ввести целое число" << endl;
            cout << "\nВведите цифру номера типы рыбы: " << endl;
            cin >> num;
        }
        int count = 0;
        while (count <= num, ++count ) {
            int danger = 0;
            int sustainability = rand() % 6 + 1;
            AlgaeandFood* newalgae = new AlgaeandFood(danger, sustainability);
            AliveAlgae.AlgaeAdd(newalgae);
        }
        break;

    }
    //ХОД АКВАРИУМА
    case 3:
        //рандом: 1 и 2. если 1, то берем второй генератор и функцию аквариум.взаимодействиерыб
        // второй генератор дает два числа, которые входят в промежуток цифр [] живых рыб, и сравнивает их
        // уровень опасности. с рыбами происходят дела
        // 
        //если 2, то выбираем функцию аквариум.рыбыводоросли, генеририруем одно число, 
        // выбираем рыбу по этому числу, уменьшаем голод на второй пункт водорослей
        //
        //делаем проверку на голод и возраст всех живых рыб, убиваем тех, кто выходит за рамки
        //

}