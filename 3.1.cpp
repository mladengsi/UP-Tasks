#include<iostream>

using namespace std;

int main()

{

    int x;

    cout<<"Vavedete chetiri-cifreno chislo"<<endl;

    cin>>x;

    cout<<"Cifrite mu sa"<<endl<<x/1000<<endl<<(x/100)%10<<endl<<(x/10)%10<<endl<<x%10;

    return 0;

}