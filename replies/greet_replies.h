#include <string>

std::string get_greet_json()
{
    std::string greet_replies = "{\n"
            "  \"timed_greets\":\n"
            "  [\n"
            "    \"Good Morning!\",\n"
            "    \"Good Afternoon\",\n"
            "    \"Good Evening\",\n"
            "    \"Good Night\"\n"
            "  ],\n"
            "  \"casual_greets\":\n"
            "  [\n"
            "    \"Hi\",\n"
            "    \"Hello\"\n"
            "  ]\n"
            "}";

    return greet_replies;
}