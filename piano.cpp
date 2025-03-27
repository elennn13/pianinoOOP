#include "piano.hpp"
#include <conio.h>
#include <iostream>

// Конструктор
Piano::Piano(AudioInterface* audioImpl) : audio(audioImpl) {
    initKeys(); // Инициализация клавиш
}

// Инициализация клавиш
void Piano::initKeys() {
    // Добавляем клавиши с частотами нот
    keys.emplace_back('Z', 261);   // До
    keys.emplace_back('X', 293);   // Ре 
    keys.emplace_back('C', 329);   // Ми 
    keys.emplace_back('V', 349);   // Фа 
    keys.emplace_back('B', 392);   // Соль  
    keys.emplace_back('N', 440);   // Ля  
    keys.emplace_back('M', 493);   // Си 
}

// Основной цикл программы
void Piano::run() {
    std::cout << "   | Z | X | C | V | B | N | M |\n";
    std::cout << "   |   |   |   |   |   |   |   |\n";
    std::cout << "   |---|---|---|---|---|---|---|\n";
    std::cout << "     C   D   E   F   G   A   B\n\n";


        // Отрисовка всех клавиш
        for (auto& key : keys) {
            key.draw();
        }
        std::cout << "\n";

        // Обработка ввода
        if (_kbhit()) {
            char input = _getch();
           
            if (input >= 'z' && input <= 'm') {
                input = toupper(input);
            }

            // Поиск и нажатие соответствующей клавиши
            for (auto& key : keys) {
                if (toupper(input) == key.getKeyChar()) {
                    key.press();
                    audio->playSound(key.getFrequency()); // ПОЛИМОРФИЗМ
                    break;
                }
            }
        }
    }
