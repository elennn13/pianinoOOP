#include "audio_interface.hpp"
#include <windows.h>

// ���������� ��� Windows
void WindowsAudio::playSound(int freq) {
    Beep(freq, 500); // ���������� ����������
}