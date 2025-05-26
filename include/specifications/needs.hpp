// #ifdef RACE
// #define RACE
// #endif

#pragma once

template <typename TNeeds = int>
class Needs {
    private:
        // Голод
        TNeeds hunger_{};
        // Значение на которое увеличивается голод за один ход
        TNeeds rate_hunger_one_turn_{};
        // Максимальное значение голода
        TNeeds max_hunger_{};
        // Усталость
        TNeeds fatigue_{};
        // Значение на которое увеличивается усталость за один ход
        TNeeds rate_fatigue_one_turn_{};
        // Максимальный уровень усталости
        TNeeds max_fatigue_{};

        // TODO: 
        // 1. При достижении максимального уровня голода отнимается по 1 единице здоровья
        // 2. При достижении максимального уровня усталости на персанажа накладываются дебаффы

    public:

        // Конструктор
        Needs() = default;

        // Деструктор
        ~Needs() = default;

        // Установить уровень голода
        // Функция получает целое число
        void set_hunger(TNeeds value) noexcept {
            hunger_ = value;
        }

        // Получить текущий уровень голода
        // Функция возвращает целое число
        [[nodiscard]] TNeeds get_hunger() const noexcept {
            return hunger_;
        }

        // Установить значение на которое увеличивается голод за один ход
        // Функция получает целое число
        void set_rate_hunger_one_turn(TNeeds value) noexcept {
            rate_hunger_one_turn_ = value;
        }
        
        // Получить значение на которое увеличивается голод за один ход
        // Функция возвращает целое число
        [[nodiscard]] TNeeds get_rate_hunger_one_turn() const noexcept {
            return rate_hunger_one_turn_;
        }

        // Установить максимальный уровень голода
        // Функция получает целое число
        void set_max_hunger(TNeeds value) noexcept {
            max_hunger_ = value;
        }
        
        // Получить текущий уровень голода
        // Функция возвращает целое число
        [[nodiscard]] TNeeds get_max_hunger() const noexcept {
            return max_hunger_;
        }

        // Установить уровень усталости
        // Функция получает целое число
        void set_fatigue(TNeeds value) noexcept {
            fatigue_ = value;
        }

        // Получить текущий уровень усталости
        // Функция возвращает целое число
        [[nodiscard]] TNeeds get_fatigue() const noexcept {
            return fatigue_;
        }
        //Установить значение на которое увеличивается голод за один ход
        // Функция принимает целое число
        void set_rate_fatigue_one_turn(TNeeds value) noexcept {
            rate_fatigue_one_turn_ = value;
        }

        // Получить значение на которое увеличивается усталость за один ход
        // Функция возвращает целое число
        [[nodiscard]] TNeeds get_rate_fatigue_one_turn() const noexcept {
            return rate_fatigue_one_turn_;
        }

        // Установить максимальный уровень усталости
        // Функция получает целое число
        void set_max_fatigue(TNeeds value) noexcept {
            max_fatigue_ = value;
        }
        
        // Получить максимальный уровень усталости
        // Функция получает целое число
        [[nodiscard]] TNeeds get_max_fatigue() const noexcept {
            return max_fatigue_;
        }    
};
