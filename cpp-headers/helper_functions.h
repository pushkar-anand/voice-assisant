#include <iostream>
#include <algorithm>
#include <fstream>
#include <random>

using namespace std;

int getRandomInteger(int min, int max) {
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> int_distribution(min, max);
    return int_distribution(rng);
}

bool contains(const string &needle, const string &haystack) {
    return haystack.find(needle) != string::npos;
}

string convert_to_lower_case(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

string file_to_string(const string &filename) {
    string json;
    ifstream json_file(filename);

    if (json_file.is_open()) {
        while (getline(json_file, json));
        json_file.close();
        return json;
    } else {
        cout << "Could not open json file" << endl;
        return "{}";
    }
}

string remove_redundant_words(string str) {
    vector<string> words_to_be_removed = {"the", "is", "are", "a", "an"};

    for (auto &element : words_to_be_removed) {
        string::size_type n = element.length();
        for (string::size_type i = str.find(element);
             i != string::npos;
             i = str.find(element))
            str.erase(i, n);
    }
    return str;
}