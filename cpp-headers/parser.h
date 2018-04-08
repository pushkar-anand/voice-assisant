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

        for(auto& element : greet_word_list)
        {
            if(contains(element, str))
            {
                return true;
            }
        }
        return false;
    }

    bool isBye()
    {

    }
    bool isCommand()
    {

    }

};

