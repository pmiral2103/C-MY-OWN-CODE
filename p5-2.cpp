#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream file;
    string filename;
    bool word=false;
    cout<<"enter file name:";
    cin>>filename;
    file.open(filename);

    if(!file)
    {
        cout<<"file not found";
        return 0;
    }

    string line;
    int tline=0,tword=0,tchar=0;
    while(getline(file,line))
    {
        tline++;
        word=false;
        for(int i=0; i<line.length(); i++)
        {
            if(line[i]!=' ')
            {
                tchar++;
                if(word==false)
                {
                    tword++;
                    word=true;
                }
            }
            else
            {
                word=false;
            }

        }

    }

    cout<<"total line:"<<tline<<endl;
    cout<<"total words:"<<tword<<endl;
    cout<<"total charachater:"<<tchar<<endl;

    file.close();
    return 0;
}

