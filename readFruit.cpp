#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    char f[20];
    ofstream out;
    out.open("fruit.txt");
    for(int i=0;i<2;i++)
    {
        cout<<"Enter Fruit Name";
        cin>>f;
        out<<f<<endl;
    }
    out.close();
    ifstream in;
    in.open("fruit.txt");
    for(int i=0;i<2;i++)
    {
    in>>f;
    cout<<f<<endl;
    }
    in.close();
    return 1;

}