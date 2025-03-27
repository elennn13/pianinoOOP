#include "piano_key.hpp"
#include <iostream>
#include <windows.h> // ��� Beep()


PianoKey::PianoKey(char key, int freq)
    : keyChar(key), frequency(freq), isPressed(false) {}

// ������� �������
void PianoKey::press() {
    isPressed = true;  // �������� ���������
    Beep(frequency, 500); // ������������� ����
    isPressed = false; // ���������� ���������
}

// ��������� �������
void PianoKey::draw() const {
    if (isPressed) {
        std::cout << "[" << keyChar << "]###"; // ������� ���
    }
    else {
        std::cout << "[" << keyChar << "]   "; // ������� ���
    }
}

// ������ ��� ������� �������
char PianoKey::getKeyChar() const {
    return keyChar;
}