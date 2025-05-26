template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_character_name(const TName& name) noexcept {
    stats_.set_person_name(name);
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TName Character<TStats, TName, TNeeds, THP>::get_character_name() const noexcept {
    return stats_.get_person_name();
}

template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_level(TStats level_) noexcept {
    stats_.set_level(level_);
}
