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
            "    \"Hi! what can I do for you\",\n"
            "    \"Hello! How can I help\",\n"
            "    \"oh hi! long time no see \",\n"
            "    \"Hey! handsome\",\n"
            "    \"Namaste!!\",\n"
            "    \"Can I be of any help??\",\n"
            "    \"At you service.\"\n"
            "  ]\n"
            "}";

    return greet_replies;
}

std::string get_bye_json() {
    std::string bye_replies = "{\n"
            "  \"bye_replies\":\n"
            "  [\n"
            "    \"Bye! Bye!\",\n"
            "    \"C U later\",\n"
            "    \"Goodbye\",\n"
            "    \"Bye! Have a great day\",\n"
            "    \"Bye Bye! \",\n"
            "    \"Will miss you, bye\",\n"
            "    \"tata\",\n"
            "    \"bye, catch me later\"\n"
            "  ]\n"
            "}";

    return bye_replies;
}