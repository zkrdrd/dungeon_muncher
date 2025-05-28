template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_character_name(const TName &name) noexcept
{
    stats_.set_person_name(name);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TName Character<TStats, TName, TNeeds, THP>::get_character_name() const noexcept
{
    return stats_.get_person_name();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_level(TStats value) noexcept
{
    stats_.set_level(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_level() const noexcept
{   
    return stats_.get_level();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_strength(TStats value) noexcept
{
    stats_.set_strength(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_strength() const noexcept
{
    return stats_.get_strength();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_dexterity(TStats value) noexcept
{
    stats_.set_dexterity(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_dexterity() const noexcept
{
    return stats_.get_dexterity();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_intelligence(TStats value) noexcept
{
    stats_.set_intelligence(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_intelligence() const noexcept
{
    return stats_.get_intelligence();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_damage(TStats value) noexcept
{
    stats_.set_damage(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_damage() const noexcept
{
    return stats_.get_damage();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_physical_protection(TStats value) noexcept
{
    stats_.set_physical_protection(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_physical_protection() const noexcept
{
    return stats_.get_physical_protection();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_magical_protection(TStats value) noexcept
{
    stats_.set_magical_protection(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_magical_protection() const noexcept
{
    return stats_.get_magical_protection();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_hunger(TNeeds value) noexcept
{
    needs_.set_hunger(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_hunger() const noexcept
{
    return needs_.get_hunger();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_rate_hunger_one_turn(TNeeds value) noexcept
{
    needs_.set_rate_hunger_one_turn(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_rate_hunger_one_turn() const noexcept
{
    return needs_.get_rate_hunger_one_turn();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_max_hunger(TNeeds value) noexcept
{
    needs_.set_max_hunger(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_max_hunger() const noexcept
{
    return needs_.get_max_hunger();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_fatigue(TNeeds value) noexcept
{
    needs_.set_fatigue(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_fatigue() const noexcept
{
    return needs_.get_fatigue();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_rate_fatigue_one_turn(TNeeds value) noexcept
{
    needs_.set_rate_fatigue_one_turn(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_rate_fatigue_one_turn() const noexcept
{
    return needs_.get_rate_fatigue_one_turn();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_max_fatigue(TNeeds value) noexcept
{
    needs_.set_max_fatigue(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_max_fatigue() const noexcept
{
    return needs_.get_max_fatigue();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_hp(THP value) noexcept
{
    thp_.set_hp(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] THP Character<TStats, TName, TNeeds, THP>::get_hp() const noexcept
{
    return thp_.get_hp();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_max_hp(THP value) noexcept
{
    thp_.set_max_hp(value);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] THP Character<TStats, TName, TNeeds, THP>::get_max_hp() const noexcept
{
    return thp_.get_max_hp();
}
