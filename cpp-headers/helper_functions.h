#include <iostream>
#include <algorithm>
#include <fstream>
#include <random>
using namespace std;

int getRandomInteger(int min, int max)
{
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> int_distribution(min, max);
    return int_distribution(rng);
}

bool contains(const string &needle, const string &haystack)
{
    return haystack.find(needle) != string::npos;
}

string convert_to_lower_case(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

string file_to_string(const string &filename)
{
    string json;
    ifstream json_file(filename);

    if(json_file.is_open())
    {
        while( getline(json_file, json) );
        json_file.close();
        return json;
    }
    else
    {
      cout<<"Could not open json file"<<endl;
      return "{}";
    }
}