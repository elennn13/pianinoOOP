#ifndef PIANO_HPP
#define PIANO_HPP

#include "piano_key.hpp"
#include "audio_interface.hpp"
#include <vector>

// Класс Piano использует КОМПОЗИЦИЮ (содержит другие классы)
class Piano {
private:
    std::vector<PianoKey> keys; // Коллекция клавиш
    AudioInterface* audio;      // Абстракция звука (ПОЛИМОРФИЗМ)

    void initKeys(); // Приватный метод (ИНКАПСУЛЯЦИЯ)

public:
    // Конструктор с внедрением зависимости
    Piano(AudioInterface* audioImpl);

    void run(); // Основной цикл
};

#endif