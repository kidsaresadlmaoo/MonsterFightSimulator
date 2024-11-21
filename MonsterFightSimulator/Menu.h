#pragma once
#include <iostream>
char answer;

int PickAMonster()
{
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
};