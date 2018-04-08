#include <string>
#include "audio_functions.h"
#include "parser.h"
#include "../replies/replies.h"

using namespace std;

void init_services()
{

}

bool understand_sentence(string str)
{
    str = convert_to_lower_case(str);
    parser cmd(str);
    if (cmd.isGreet())
    {
        string reply = greetReply(str);
        speak(reply);
    }
    else if(cmd.isBye())
    {

    }
    else if(cmd.isCommand())
    {

    }
    else
    {
        string reply = unableReply();
        speak(reply);
    }

}
