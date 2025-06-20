#include <iostream>
#include <vector>
#include <string>
#include "character.h"
#include "monster.h"
#include "item.h"

using namespace std;

Monster* generateMonster(int level) {
    vector<string> names = { "Goblin", "Orc", "Troll", "Slime" };
    int idx = rand() % names.size();
    int baseHealth = 100 + (level * 10);
    int baseAttack = 10 + (level * 2);

    return new Monster(names[idx], baseHealth, baseAttack);
}