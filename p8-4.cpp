#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    string filename,line;
    int lineno=0;
    ifstream file;
    cout<<"enter file name:";
    cin>>filename;
    file.open(filename);
    if(!file)
    {
        cout<<"file not found";
        file.clear();
        return 0;
    }
    while(getline(file,line))
    {
        lineno++;
        stringstream ss(line);
        int sum=0,count=0,num;
        bool valid=true;

        while(ss>>num)
        {
            sum+=num;
            count++;
        }
        if(!ss.eof())
        {
            valid=false;
        }
        if(valid && count>0)
        {
            cout<<"line no:"<<lineno;
            cout<<" sum:"<<sum;
            cout<<" avg:"<<float(sum)/count<<endl;
        }
        else
        {
            cout<<"line: "<<lineno<<" is invalid"<<endl;
        }
    }
    file.close();
    return 0;
}
