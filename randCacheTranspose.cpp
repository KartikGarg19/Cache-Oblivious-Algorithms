#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout;
    fout.open("inputMatrixTransposition.txt");
    int n = 8192, m = 8192;
    fout<<n<<" "<<m<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x = rand()%2;
            fout<<x<<" ";
        }
        fout<<endl;
    }
    return 0;
}