#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int choice;
    string fname,file;
    map<string,vector<string>>folder;
    do
    {
        cout<<"1 for folder"<<endl;
        cout<<"2 for file"<<endl;
        cout<<"3 for display"<<endl;
        cout<<"exit"<<endl;
        cout<<"enter choice:";
        cin>>choice;

        if(choice==1)
        {
            cout<<"enter folder name:";
            cin>>fname;
            folder[fname];
        }
        if(choice==2)
        {
            cout<<"folder name:";
            cin>>fname;
            cout<<"file name:";
            cin>>file;
            folder[fname].push_back(file);
        }
        if(choice==3)
        {
            for(auto i = folder.begin(); i != folder.end(); i++)
            {
                cout << "Folder: " << i->first << endl;

                for(int j = 0; j < i->second.size(); j++)
                {
                    cout << "   File: " << i->second[j] << endl;
                }
            }
        }
    }
    while(choice!=4);
    return 0;
}
