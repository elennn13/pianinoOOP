#include "piano.hpp"
#include "audio_interface.hpp"

int main() {
    // Создаем конкретную реализацию звука (НАСЛЕДОВАНИЕ)
    WindowsAudio winAudio;

    // Создаем пианино с Windows-реализацией звука
    Piano piano(&winAudio);

    // Запускаем приложение
    piano.run();

    return 0;
}