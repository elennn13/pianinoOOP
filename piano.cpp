#include "piano.hpp"
#include <conio.h>
#include <iostream>

// �����������
Piano::Piano(AudioInterface* audioImpl) : audio(audioImpl) {
    initKeys(); // ������������� ������
}

// ������������� ������
void Piano::initKeys() {
    // ��������� ������� � ��������� ���
    keys.emplace_back('Z', 261);   // ��
    keys.emplace_back('X', 293);   // �� 
    keys.emplace_back('C', 329);   // �� 
    keys.emplace_back('V', 349);   // �� 
    keys.emplace_back('B', 392);   // ����  
    keys.emplace_back('N', 440);   // ��  
    keys.emplace_back('M', 493);   // �� 
}

// �������� ���� ���������
void Piano::run() {
    std::cout << "   | Z | X | C | V | B | N | M |\n";
    std::cout << "   |   |   |   |   |   |   |   |\n";
    std::cout << "   |---|---|---|---|---|---|---|\n";
    std::cout << "     C   D   E   F   G   A   B\n\n";


        // ��������� ���� ������
        for (auto& key : keys) {
            key.draw();
        }
        std::cout << "\n";

        // ��������� �����
        if (_kbhit()) {
            char input = _getch();
           
            if (input >= 'z' && input <= 'm') {
                input = toupper(input);
            }

            // ����� � ������� ��������������� �������
            for (auto& key : keys) {
                if (toupper(input) == key.getKeyChar()) {
                    key.press();
                    audio->playSound(key.getFrequency()); // �����������
                    break;
                }
            }
        }
    }
