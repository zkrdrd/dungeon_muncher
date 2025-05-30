#pragma once
#include <string>

template <typename TStats = int, typename TName = std::string>
class Stats
{
private:
    // Имя персонажа
    TName person_name_{};
    // Уровень
    TStats level_{};
    // Сила
    TStats strength_{};
    // Ловкость
    TStats dexterity_{};
    // Интелект
    TStats intelligence_{};
    // Урон
    TStats damage_{};
    // Физическая защита
    TStats physical_protection_{};
    // Магическая защита
    TStats magical_protection_{};

public:
    // Конструктор
    Stats() = default;

    // Деструктор
    ~Stats() = default;

    // Установить имя персонажа
    // Функция принимает строку
    void set_person_name(const TName &value) noexcept
    {
        person_name_ = value;
    }

    // Получить имя персонажа
    // Функция возвращает строку
    [[nodiscard]] TName get_person_name() const noexcept
    {
        return person_name_;
    }

    // Установить уровень персонажа
    // Функция принимает челое число
    void set_level(TStats value) noexcept
    {
        level_ = value;
    }

    // Получить уровень персонажа
    // Функция возвращает четноечисло
    [[nodiscard]] TStats get_level() const noexcept
    {
        return level_;
    }

    // Установить уровень силы персонажа
    // Функция принимает челое число
    void set_strength(TStats value) noexcept
    {
        strength_ = value;
    }

    // Получить уровень силы персонажа
    // Функция возвращает четноечисло
    [[nodiscard]] TStats get_strength() const noexcept
    {
        return strength_;
    }

    // Установить уровень ловкости персонажа
    // Функция принимает челое число
    void set_dexterity(TStats value) noexcept
    {
        dexterity_ = value;
    }

    // Поулчить уровень ловкости персонажа
    // Функция возвращает четноечисло
    [[nodiscard]] TStats get_dexterity() const noexcept
    {
        return dexterity_;
    }

    // Установить уровень интеректа персонажа
    // Функция принимает челое число
    void set_intelligence(TStats value) noexcept
    {
        intelligence_ = value;
    }

    // Поулчить уровень интеректа персонажа
    // Функция возвращает четноечисло
    [[nodiscard]] TStats get_intelligence() const noexcept
    {
        return intelligence_;
    }

    // Установить уровень атаки персонажа
    // Функция принимает челое число
    void set_damage(TStats value) noexcept
    {
        damage_ = value;
    }

    // Поулчить уровень атаки персонажа
    // Функция возвращает четноечисло
    [[nodiscard]] TStats get_damage() const noexcept
    {
        return damage_;
    }

    // Установить уровень физической защиты персонажа
    // Функция принимает челое число
    void set_physical_protection(TStats value) noexcept
    {
        physical_protection_ = value;
    }

    // Поулчить уровень физической защиты персонажа
    // Функция возвращает четноечисло
    [[nodiscard]] TStats get_physical_protection() const noexcept
    {
        return physical_protection_;
    }

    // Установить уровень магической защиты персонажа
    // Функция принимает челое число
    void set_magical_protection(TStats value) noexcept
    {
        magical_protection_ = value;
    }

    // Поулчить уровень магической защиты персонажа
    // Функция возвращает четноечисло
    [[nodiscard]] TStats get_magical_protection() const noexcept
    {
        return magical_protection_;
    }
};
