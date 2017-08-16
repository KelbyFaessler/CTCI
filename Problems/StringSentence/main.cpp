#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string>* Merge(vector<string> words, vector<string> more)
{
    vector<string>* sentence = new vector<string>();
    for (string word : words)
    {
        sentence->push_back(word);
    }
    for (string word : more)
    {
        sentence->push_back(word);
    }
    return sentence;
}

int main(int argc, char* argv[])
{
    vector<string> firstHalf = { "this", "is", "half" };
    vector<string> secondHalf = { "and", "this", "is", "another", "half" };

    vector<string>* sentence = Merge(firstHalf, secondHalf);

    for (string word : *sentence)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}