#include <iostream>
#include "cpp-headers/assistant.h"

using namespace std;

int main(int argc, char *argv[]) {
    string user_name = "Pushkar";
    string bot_name = "Thinky";
    string welcome_text = "Hi!! " + user_name + ". How can I help??";

    init_services();
    string sentence;

    if (argc > 1) {

        for (int i = 1; i < argc; i++) {
            sentence += argv[i];
            sentence += " ";
        }
        understand_sentence(sentence);
    } else {
        if (!isMicAvailable()) {
            char ch = 'a';
            speak(welcome_text);

            while (ch != 'q') {
                cout << bot_name << ">>";
                getline(cin, sentence);
                understand_sentence(sentence);
                speak("Press c to continue or q to quit");
                cout << "continue(c/q): ";
                ch = static_cast<char>(getchar());
                cin.ignore();
            }
            speak(byeReply());
        } else {
            startAudioListener();
        }
    }

    return 0;
}