#include <iostream>
#include "cpp-headers/assistant.h"
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

    init_services();
    string sentence;

    if (argc > 1)
    {

        for (int i = 1; i < argc; i++)
        {
            sentence += argv[i];
            sentence += " ";
        }

        understand_sentence(sentence);
    }
    else
    {
        if(!isMicAvailable())
        {
            getline(cin, sentence);
            understand_sentence(sentence);
        }
        else
        {
            startAudioListener();
        }
    }

    return 0;
}