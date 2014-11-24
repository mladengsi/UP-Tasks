#include<iostream>

#include<string>

#include<stdio.h>

using namespace std;

int main()

{

    string word;

    cout<<"Vuvedete dumata"<<endl;

    cin>>word;

    int wordLen=strlen(word.c_str());

    cout<<"Dumata naobratno e";

    for (int i=wordLen;i>=0;--i)

    {

        cout<<word[i];

    }

    return 0;

}