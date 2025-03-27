#include "piano_key.hpp"
#include <iostream>
#include <windows.h> // Для Beep()


PianoKey::PianoKey(char key, int freq)
    : keyChar(key), frequency(freq), isPressed(false) {}

// Нажатие клавиши
void PianoKey::press() {
    isPressed = true;  // Изменяем состояние
    Beep(frequency, 500); // Воспроизводим звук
    isPressed = false; // Сбрасываем состояние
}

// Отрисовка клавиши
void PianoKey::draw() const {
    if (isPressed) {
        std::cout << "[" << keyChar << "]###"; // Нажатый вид
    }
    else {
        std::cout << "[" << keyChar << "]   "; // Обычный вид
    }
}

// Геттер для символа клавиши
char PianoKey::getKeyChar() const {
    return keyChar;
}