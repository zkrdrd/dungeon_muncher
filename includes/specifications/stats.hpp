#pragma once
#include <string>
#include <concepts>
#include <concepts>

template <typename TStats = int, typename TName = std::string> 
   // requires std::is_same_v<TStats, int>
class Stats {
    //static_assert(std::is_integral_v<TStats>,"TStats must be an integral type");
    private:
        TName personName{};
        TStats level{1};
        TStats strength{};
        TStats dexterity{};
        TStats intelligence{};
        TStats damage{};

    public:
        Stats() = default;
        ~Stats() = default;
        void setPersonName(const TName& value) noexcept {
            personName = value;
        }
        [[nodiscard]] TName getPersonName() const noexcept {
            return personName;
        }
        void setLevel(TStats value) noexcept {
            level = value;
        }
        [[nodiscard]] TStats getLevel() const noexcept {
            return level;
        }
        void setStrength(TStats value) noexcept {
            strength = value;
        }
        [[nodiscard]] TStats getStrength() const noexcept {
            return strength;
        }
        void setDexterity(TStats value) noexcept {
            dexterity = value;
        }
        [[nodiscard]] TStats getDexterity() const noexcept {
            return dexterity;
        }
        void setIntelligence(TStats value) noexcept {
            intelligence = value;
        }
        [[nodiscard]] TStats getIntelligence() const noexcept {
            return intelligence;
        }
        void setDamage(TStats value) noexcept {
            damage = value;
        }
        [[nodiscard]] TStats getDamage() const noexcept {
            return damage;
        }        
};
