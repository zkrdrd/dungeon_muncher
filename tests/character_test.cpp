#include <gtest/gtest.h>
#include "character.hpp"

// Фикстура для тестирования класса Character
class CharacterTest : public ::testing::Test
{
protected:
    Character<int, std::string, int, int> character;

    // void SetUp() override
    // {
    //     // Инициализация персонажа с тестовыми значениями
    //     character.set_character_name("TestHero");
    //     character.set_level(5);
    //     character.set_strength(10);
    //     character.set_dexterity(8);
    //     character.set_intelligence(7);
    //     character.set_damage(15);
    //     character.set_physical_protection(3);
    //     character.set_magical_protection(2);

    //     character.set_hunger(20);
    //     character.set_rate_hunger_one_turn(1);
    //     character.set_max_hunger(100);

    //     character.set_fatigue(30);
    //     character.set_rate_fatigue_one_turn(2);
    //     character.set_max_fatigue(120);

    //     character.set_hp(50);
    //     character.set_max_hp(100);
    // }
};

// Тесты делегирования методов Stats
TEST_F(CharacterTest, NameManagement)
{
    character.set_character_name("NewName");
    EXPECT_EQ(character.get_character_name(), "NewName");
}

TEST_F(CharacterTest, LevelManagement)
{
    character.set_level(10);
    EXPECT_EQ(character.get_level(), 10);
}

TEST_F(CharacterTest, AttributeManagement)
{
    character.set_strength(15);
    character.set_dexterity(12);
    character.set_intelligence(9);

    EXPECT_EQ(character.get_strength(), 15);
    EXPECT_EQ(character.get_dexterity(), 12);
    EXPECT_EQ(character.get_intelligence(), 9);
}

TEST_F(CharacterTest, CombatStatsManagement)
{
    character.set_damage(20);
    character.set_physical_protection(5);
    character.set_magical_protection(4);

    EXPECT_EQ(character.get_damage(), 20);
    EXPECT_EQ(character.get_physical_protection(), 5);
    EXPECT_EQ(character.get_magical_protection(), 4);
}

// Тесты делегирования методов Needs
TEST_F(CharacterTest, HungerManagement)
{
    character.set_hunger(50);
    character.set_rate_hunger_one_turn(2);
    character.set_max_hunger(150);

    EXPECT_EQ(character.get_hunger(), 50);
    EXPECT_EQ(character.get_rate_hunger_one_turn(), 2);
    EXPECT_EQ(character.get_max_hunger(), 150);
}

TEST_F(CharacterTest, FatigueManagement)
{
    character.set_fatigue(40);
    character.set_rate_fatigue_one_turn(3);
    character.set_max_fatigue(200);

    EXPECT_EQ(character.get_fatigue(), 40);
    EXPECT_EQ(character.get_rate_fatigue_one_turn(), 3);
    EXPECT_EQ(character.get_max_fatigue(), 200);
}

// Тесты делегирования методов Health
TEST_F(CharacterTest, HPManagement)
{
    character.set_hp(75);
    character.set_max_hp(150);

    EXPECT_EQ(character.get_hp(), 75);
    EXPECT_EQ(character.get_max_hp(), 150);
}

TEST_F(CharacterTest, DefaultValues)
{
    Character<int, std::string, int, int> defaultChar;

    // Проверка значений по умолчанию
    EXPECT_EQ(defaultChar.get_character_name(), "");
    EXPECT_EQ(defaultChar.get_level(), 0);
    EXPECT_EQ(defaultChar.get_strength(), 0);
    EXPECT_EQ(defaultChar.get_dexterity(), 0);
    EXPECT_EQ(defaultChar.get_intelligence(), 0);
    EXPECT_EQ(defaultChar.get_damage(), 0);
    EXPECT_EQ(defaultChar.get_physical_protection(), 0);
    EXPECT_EQ(defaultChar.get_magical_protection(), 0);

    EXPECT_EQ(defaultChar.get_hunger(), 0);
    EXPECT_EQ(defaultChar.get_rate_hunger_one_turn(), 0);
    EXPECT_EQ(defaultChar.get_max_hunger(), 0);

    EXPECT_EQ(defaultChar.get_fatigue(), 0);
    EXPECT_EQ(defaultChar.get_rate_fatigue_one_turn(), 0);
    EXPECT_EQ(defaultChar.get_max_fatigue(), 0);

    EXPECT_EQ(defaultChar.get_hp(), 0);
    EXPECT_EQ(defaultChar.get_max_hp(), 0);
}

// Тест для специализации шаблона
TEST(CharacterHPTest, DamageTest)
{
    Character<int, std::string, int, int> customChar;
    customChar.set_hp(100);
    EXPECT_EQ(customChar.get_hp(), 100);
    customChar.take_damage(12);
    EXPECT_EQ(customChar.get_hp(), 88);
    customChar.take_damage(100);
    EXPECT_EQ(customChar.get_hp(), 0);
}

TEST(CharacterHPTest, HealingTest)
{
    Character<int, std::string, int, int> customChar;
    customChar.set_hp(50);
    customChar.set_max_hp(150);
    EXPECT_EQ(customChar.get_hp(), 50);
    customChar.healing(12);
    EXPECT_EQ(customChar.get_hp(), 62);
    customChar.healing(12);
    EXPECT_EQ(customChar.get_hp(), 74);
    customChar.healing(100);
    EXPECT_EQ(customChar.get_hp(), 150);
    customChar.healing(100);
    EXPECT_EQ(customChar.get_hp(), 150);
}

TEST(CharacterHealingTest, Healing)
{
    Character<int, std::string, int, int> customChar;
}

// Тест для специализации шаблона
TEST(CharacterTemplateTest, DifferentTemplateTypes)
{
    Character<float, std::string, double, long> customChar;

    customChar.set_character_name("FloatChar");
    customChar.set_level(3.5f);
    customChar.set_strength(12.3f);
    customChar.set_hp(1000L);

    EXPECT_EQ(customChar.get_character_name(), "FloatChar");
    EXPECT_FLOAT_EQ(customChar.get_level(), 3.5f);
    EXPECT_FLOAT_EQ(customChar.get_strength(), 12.3f);
    EXPECT_EQ(customChar.get_hp(), 1000L); \
}
