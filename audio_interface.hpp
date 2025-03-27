#ifndef AUDIO_INTERFACE_H
#define AUDIO_INTERFACE_H

// Абстрактный класс - демонстрирует ПОЛИМОРФИЗМ
class AudioInterface {
public:
    virtual ~AudioInterface() = default; // Виртуальный деструктор
    virtual void playSound(int freq) = 0; // Чисто виртуальный метод
};

// Конкретная реализация для Windows (НАСЛЕДОВАНИЕ)
class WindowsAudio : public AudioInterface {
public:
    void playSound(int freq) override; // Переопределение метода
};

#endif