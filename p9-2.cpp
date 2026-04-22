#include<iostream>
#include<map>
#include<sstream>
using namespace std;
int main()
{
    string sentence,word;
    map<string,int> m;

    cout<<"enter sentence:";
    getline(cin,sentence);

    stringstream ss(sentence);

    while(ss>>word)
    {
        m[word]++;
    }

    for(auto i=m.begin(); i!=m.end(); i++)
    {
        cout<<i->first<<"="<<i->second<<endl;
    }
    return 0;
}
