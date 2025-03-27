#ifndef PIANO_KEY_H // ������ �� ���������� ���������
#define PIANO_KEY_H

// ����� PianoKey ������������
class PianoKey {
private: // ������� ������ - ���������� ���������
    char keyChar;    // ����� ������� (Z, X, C...)
    int frequency;   // ������� �����
    bool isPressed;  // ��������� �������
    

public: 
   
    PianoKey(char key, int freq);

    // ����� ��� ������� �������
    void press();

    // ����������� �������
    void draw() const;

    char getKeyChar() const;
    
    int getFrequency() const { return frequency; }
};

#endif