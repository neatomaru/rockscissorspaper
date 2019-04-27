#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include "Services.h"
using namespace std;


int main() {
    char game[] = {'r', 's', 'p'};
    char unit;
    char comp;
    int user_score {0}, comp_score {0};
    while (unit != '|') {

        cout << "Выберите камень(r), ножницы(s) или бумагу(p):\n";
        cin >> unit;

        switch (unit) {
            case 'r': {
                cout << "Вы выбрали камень!\n";
                comp = game[random() % 3];
                switch (comp) {
                    case 'r':
                        cout << "Компьютер выбрал камень\n";
                        cout << "Ничья!\n";
                        break;
                    case 's':
                        cout << "Компьютер выбрал ножницы\n";
                        cout << "Вы победили!\n";
                        ++user_score;
                        break;
                    case 'p':
                        cout << "Компьютер выбрал бумагу\n";
                        cout << "Победил компьютер :(\n";
                        ++comp_score;
                        break;
                }
                break;
            }

            case 's': {
                cout << "Вы выбрали ножницы!\n";
                comp = game[random() % 3];
                switch (comp) {
                    case 'r':
                        cout << "Компьютер выбрал камень\n";
                        cout << "Победил компьютер :(\n";
                        ++comp_score;
                        break;
                    case 's':
                        cout << "Компьютер выбрал ножницы\n";
                        cout << "Ничья!\n";
                        break;
                    case 'p':
                        cout << "Компьютер выбрал бумагу\n";
                        cout << "Вы победили\n";
                        ++user_score;
                        break;
                }
                break;
            }

            case 'p': {
                cout << "Вы выбрали бумагу!\n";
                comp = game[random() % 3];
                switch (comp) {
                    case 'r':
                        cout << "Компьютер выбрал камень\n";
                        cout << "Вы победили!\n";
                        ++user_score;
                        break;
                    case 's':
                        cout << "Компьютер выбрал ножницы\n";
                        cout << "Победил компьютер :(\n";
                        ++comp_score;
                        break;
                    case 'p':
                        cout << "Компьютер выбрал бумагу\n";
                        cout << "Ничья!\n";
                        break;
                }
            }

        }
        cout << "Ваш счет: " << user_score ;
        cout << "\nСчет компьютера: " << comp_score << '\n';
    }


}
