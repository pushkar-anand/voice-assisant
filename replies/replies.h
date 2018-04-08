#include <string>
#include <chrono>
#include <ctime>
#include "../cpp-headers/json.hpp"
#include "greet_replies.h"

using namespace std;
using json = nlohmann::json;

string greetReply(string str)
{

    string json_string = get_greet_json();
    json j = json::parse(json_string);

    if(contains("good morning", str) || contains("good afternoon", str) || contains("good evening", str))
    {
        json x = j["timed_greets"];

        time_t now;
        struct tm *now_tm;
        int hour, min;

        now = time(nullptr);
        now_tm = localtime(&now);

        hour = now_tm->tm_hour;
        min = now_tm->tm_min;

        if( hour>=0 && hour<12 )
        {
            return x[0];
        }
        else if(hour>=12 && hour<16)
        {
            return x[1];
        }
        else if(hour>=16 && hour<20)
        {
            return x[2];
        }
        else
        {
            return x[3];
        }
    }
    else
    {
        json x = j["casual_greets"];
        /*for (auto& element : x) {
            std::cout << element << '\n';
        }*/
        int i = getRandomInteger(0, static_cast<int>(x.size() - 1));
        return x[i];
    }
}

string unableReply()
{
    return "Sorry!! I did'nt get that";
}