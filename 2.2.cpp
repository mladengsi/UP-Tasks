#include<iostream>

#include<stdio.h>

using namespace std;

int main()

{

    int n,max,min;

    cout<<"Vuvedete br na priatelite si";

    cin>>n;

    int a[n];

    cout<<"Vuvedete tqhnata vyzrast";

    for (int i=0;i<n;i++)

    {

        cin>>a[i];

    }

    max=a[0];

    min=a[0];

    for (int i=0;i<n;i++)

    {

        if(a[i]>max) max=a[i];

        if(a[i]<min) min=a[i];

    }

    cout<<"Nai-vyzrastniqt e na "<<max<<" godini i nai-mladiqt e na "<<min<<" godini";

    return 0;

}