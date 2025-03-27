#ifndef PIANO_HPP
#define PIANO_HPP

#include "piano_key.hpp"
#include "audio_interface.hpp"
#include <vector>

// ����� Piano ���������� ���������� (�������� ������ ������)
class Piano {
private:
    std::vector<PianoKey> keys; // ��������� ������
    AudioInterface* audio;      // ���������� ����� (�����������)

    void initKeys(); // ��������� ����� (������������)

public:
    // ����������� � ���������� �����������
    Piano(AudioInterface* audioImpl);

    void run(); // �������� ����
};

#endif