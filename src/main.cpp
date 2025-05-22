#include <iostream>
//#include <human.hpp>
//using namespace std;
#include "character.hpp"

int main()
{
    Character<int, std::string> hero;
    hero.setCharacterName("Aragorn");
    std::string name = hero.getCharacterName();
    std::cout << name << std::endl;
    // hero.setHP(100.5f);
    // hero.applyDamage(20.3f);
    
    // if (hero.getHP() > 0) {
    //     hero.setLevel(hero.getLevel() + 1);
    // }

    //human.DisplayStats();
    //std::cout << obj.GetHuman() << std::endl;
    std::cout << "Hello world!" << std::endl;
    return 0;
}


// #include "Race.hpp"

// int main() {
//     Race<int, int, int, int> player;

//     // Устанавливаем характеристики
//     player.getStats().setStrength(10);
//     player.getStats().setDexterity(8);
//     player.getHealth().setHP(100);
//     player.getHealth().setMaxHP(150);
//     player.getDamage().setDamage(20);

//     // Игровой цикл
//     player.update(); // Увеличивает голод и усталость

//     return 0;
// }