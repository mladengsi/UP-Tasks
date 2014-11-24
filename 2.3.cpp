#include <iostream>

using namespace std;

int main ()

{

int n, m;

cin>>n>>m;

int a[20][20];

for (int i=0; i<n; i++){

for (int j=0; j<m; j++){

cin>>a[i][j];

}

}

int N, M;

cout <<"Vuvedete br na redovete";

cin >>N;

cout <<"Vuvedete br na kolonite";

cin >> M;

for (int i=0; i<N; i++){

for (int j=0; j<M; j++){

cin>>N>>M;

}

}

return 0;

}