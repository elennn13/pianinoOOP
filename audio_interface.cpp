#include "audio_interface.hpp"
#include <windows.h>

// Реализация для Windows
void WindowsAudio::playSound(int freq) {
    Beep(freq, 500); // Конкретная реализация
}