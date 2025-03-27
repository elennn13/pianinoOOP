#ifndef AUDIO_INTERFACE_H
#define AUDIO_INTERFACE_H

// ����������� ����� - ������������� �����������
class AudioInterface {
public:
    virtual ~AudioInterface() = default; // ����������� ����������
    virtual void playSound(int freq) = 0; // ����� ����������� �����
};

// ���������� ���������� ��� Windows (������������)
class WindowsAudio : public AudioInterface {
public:
    void playSound(int freq) override; // ��������������� ������
};

#endif