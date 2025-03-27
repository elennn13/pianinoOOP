#ifndef PIANO_KEY_H // Защита от повторного включения
#define PIANO_KEY_H

// Класс PianoKey ИНКАПСУЛЯЦИя
class PianoKey {
private: // Скрытые данные - внутреннее состояние
    char keyChar;    // Буква клавиши (Z, X, C...)
    int frequency;   // Частота звука
    bool isPressed;  // Состояние нажатия
    

public: 
   
    PianoKey(char key, int freq);

    // Метод для нажатия клавиши
    void press();

    // Отображение клавиши
    void draw() const;

    char getKeyChar() const;
    
    int getFrequency() const { return frequency; }
};

#endif