#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string buffer, text, word;
    cout << "Enter text for find bad words:";
    cin >> word;
    ifstream in("file.txt"); 
    while (in >> buffer) 
    {
        if (buffer == word) 
        {
            cout << "your text have a bad word...." << endl;
            return 0;
        }
        else
        {
            cout << "your file error 404" << endl;
        }


}