#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg = {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    
    std::cout << "１人が意識不明か　兵庫・氷ノ山で男性５人遭難!" << std::endl;

    int i=0;
    while((i++)<10)
        cout<<"見てる？天気予報!\n";
    cout<<endl;

    return 0;
    //aab4aa47eb3a0723f63427daed1a7bcfca5b6e5b
}
