#include<bits/stdc++.h>
using namespace std;

string readFile(string f)
{

    ifstream infile;
    infile.open(f);

    string line;
    string s;
    while(getline(infile,line))
    {
        s+=line+'\n';
    }

    return s;

}
int main()
{

string s1 =  readFile("in.cpp");

cout<<s1<<endl;
}


