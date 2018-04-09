#include <string>
#include <vector>
#include "helper_functions.h"
using namespace std;
class parser
{
private:
    string str;
public:

    explicit parser(string &str)
    {
        this->str = str;
    }

    bool isGreet()
    {
        vector<string> greet_word_list;

        greet_word_list.emplace_back("hello");
        greet_word_list.emplace_back("hi");
        greet_word_list.emplace_back("good morning");
        greet_word_list.emplace_back("morning");
        greet_word_list.emplace_back("good afternoon");
        greet_word_list.emplace_back("hey");
        greet_word_list.emplace_back("namaste");
        greet_word_list.emplace_back("hola");
        greet_word_list.emplace_back("hii");
        greet_word_list.emplace_back("good evening");

        return search_s(greet_word_list, str);
    }

    bool isBye()
    {
        vector<string> bye_word_list;

        bye_word_list.emplace_back("bye");
        bye_word_list.emplace_back("goodbye");
        bye_word_list.emplace_back("tata");
        bye_word_list.emplace_back("c u later");
        bye_word_list.emplace_back("bye bye");

        return search_s(bye_word_list, str);
    }

    pair<bool, vector<string> > isCommand()
    {
        vector<string> command_word_list;

        command_word_list.emplace_back("open");
        command_word_list.emplace_back("launch");
        command_word_list.emplace_back("play");
        command_word_list.emplace_back("run");
        command_word_list.emplace_back("remind");
        command_word_list.emplace_back("email");
        command_word_list.emplace_back("search");
        command_word_list.emplace_back("update");
        command_word_list.emplace_back("display");
        command_word_list.emplace_back("execute");
        command_word_list.emplace_back("close");

        return make_pair(search_s(command_word_list, str), command_word_list);
    }

    bool isCompliment() {
        vector<string> compliment_word_list;

        compliment_word_list.emplace_back("thanks");
        compliment_word_list.emplace_back("thank");
        compliment_word_list.emplace_back("good");
        compliment_word_list.emplace_back("wonderful");

        return search_s(compliment_word_list, str);
    }

    bool isQuestion() {
        vector<string> question_word_list;

        question_word_list.emplace_back("what");
        question_word_list.emplace_back("who");
        question_word_list.emplace_back("where");
        question_word_list.emplace_back("how");

        return search_s(question_word_list, str);
    }

    bool search_s(vector<string> &needles, const string &haystack) {
        for (auto &element : needles) {
            if (contains(element, haystack)) {
                return true;
            }
        }
        return false;
    }

};

