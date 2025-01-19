#include<iostream>
#include<string>
using namespace std;

void genret_binary(string s,int n)
{
    if(s.size()==n)
    {
        cout<<s<<" "<<endl;
        return ;
    }

    genret_binary(s+'0',n);
    if(s=="" || s[s.length()-1] =='0')
    {
        genret_binary(s+'1',n);
    }


}


int main()
{
    int n=4;

    genret_binary("",n);

    return 0;
}