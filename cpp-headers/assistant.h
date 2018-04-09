#include <string>
#include "audio_functions.h"
#include "parser.h"
#include "../replies/replies.h"

using namespace std;

void init_services()
{

}

void understand_sentence(string &str) {
    vector<string> cmd_list;

    str = remove_redundant_words(convert_to_lower_case(str));
    parser parse(str);
    if (parse.isGreet())
    {
        string reply = greetReply(str);
        speak(reply);
        return;
    } else if (parse.isBye())
    {
        speak(byeReply());
        exit(0);
    } else if (parse.isCompliment())
    {
        speak(complimentReply());
        return;
    } else if (parse.isQuestion()) {
        speak("I cannot answer questions yet");
        return;
    } else {
        auto res = parse.isCommand();
        if (res.first) {
            cmd_list = res.second;
        }
    }

    speak(unableReply());

}
