#include<iostream>

using namespace std;

int main()

{

    int x,max,min,max1=1,min1=1;

    cout<<"Vavedete broq na uchastnicite"<<endl;

    cin>>x;

    int a[x];

    for(int i=0;i<x;i++)

    {

        cout<<"Vavedete tochkite na"<<i+1<<"tiq uchastnik"<<endl;

        cin>>a[i];

    }

    max=a[0];

    min=a[0];

    for(int i=0;i<x;i++)

    {

        if(max<a[i]) { max=a[i]; max1=i+1;}

        if(min>a[i]) { min=a[i]; min1=i+1;}

    }

    cout<<"Uchastnikut s nai-mnogo tochki e s nomer"<<max1<<"i ima tochki"<<max<<endl;

    cout<<"Uchastnikut s nai-malko tochki e s nomer"<<min1<<"i ima tochki"<<min<<endl;

    return 0;

}
