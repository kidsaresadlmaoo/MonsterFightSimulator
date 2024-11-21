
#include<iostream>
#include "Menu.h"

int main()
{
    int monster_a = 0;
    int monster_b = 0;
    
    std::cout << "Welcome in fighter wars\n";
    std::cout << "Pick your first fighter\n";
    monster_a = PickAMonster();

    std::cout << "Pick your second fighter\n";
    monster_b = PickAMonster();
}


/*std::cout << "Hello World!\n";

    char answer;


    {
        std::cout << "Welcome in game name\n";
        std::cout << "Choose your fighter\n";
        std::cout << "1. Sethos [1] 2. Baizhu [2] 3. Heizou [3]\n";

        std::cin >> answer;


        switch (answer)
        {
        case '1':
            std::cout << "you picked Sethos\n";
            answer = '1';
            break;

        case '2':
            std::cout << "you picked Baizhu\n";
            answer = '2';
            break;

        case '3':
            std::cout << "you picked Heizou\n";
            answer = '3';
            break;
        }
    }

        steps :

    1. interface
    2. monsters classes : 
      
      ~ archers
      ~ catalyst 
      ~ "streetfighter"
    3. define classes presets 
    4. define the "tour par tour" concept




    struct Enemy {
    std::string name;
    int hit_points;
    int defense;
    int attack;
    }; (never forget the ';')
    
    int monster_a = 0;
    int monster_b = 0;

    std::cout << "Welcome in fighter wars !" << '\n';

    std::cout << "Choose your first fighter : " << '\n';
    monster_a = PickAMonster();

    std::cout << "Choose your second fighter : " << '\n';
    monster_b = PickAMonster();

    Fight(monster_a, monster_b);

    void Fight(int monster_a, int monster_b)
{
    std::cout << "fight !" << std::endl;
    std::cout << monster_a << " vs " << monster_b << std::endl;
}

*/