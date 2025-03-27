#include "piano.hpp"
#include <conio.h>
#include <iostream>

// Êîíñòðóêòîð
Piano::Piano(AudioInterface* audioImpl) : audio(audioImpl) {
    initKeys(); // Èíèöèàëèçàöèÿ êëàâèø
}

// Èíèöèàëèçàöèÿ êëàâèø
void Piano::initKeys() {
    // Äîáàâëÿåì êëàâèøè ñ ÷àñòîòàìè íîò
    keys.emplace_back('Z', 261);   // Äî
    keys.emplace_back('X', 293);   // Ðå 
    keys.emplace_back('C', 329);   // Ìè 
    keys.emplace_back('V', 349);   // Ôà 
    keys.emplace_back('B', 392);   // Ñîëü  
    keys.emplace_back('N', 440);   // Ëÿ  
    keys.emplace_back('M', 493);   // Ñè 
}

// Îñíîâíîé öèêë ïðîãðàììû
void Piano::run() {
    std::cout << "   | Z | X | C | V | B | N | M |\n";
    std::cout << "   |   |   |   |   |   |   |   |\n";
    std::cout << "   |---|---|---|---|---|---|---|\n";
    std::cout << "     C   D   E   F   G   A   B\n\n";


        // Îòðèñîâêà âñåõ êëàâèø
        for (auto& key : keys) {
            key.draw();
        }
        std::cout << "\n";
// this if need to be wrapped by cicle for repeated hook of user hitting key
        // Îáðàáîòêà ââîäà
        if (_kbhit()) {
            char input = _getch();
           
            if (input >= 'z' && input <= 'm') {
                input = toupper(input);
            }

            // Ïîèñê è íàæàòèå ñîîòâåòñòâóþùåé êëàâèøè
            for (auto& key : keys) {
                if (toupper(input) == key.getKeyChar()) {
                    key.press();
                    audio->playSound(key.getFrequency()); // ÏÎËÈÌÎÐÔÈÇÌ
                    break;
                }
            }
        }
    }
