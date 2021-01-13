#include<bits/stdc++.h>

using namespace std;

int main(){
    string identity;
    int flag, string;

    cout<<"Enter the identifier: ";
    cin>>identity;

    if(isalpha(identity[0]) || identity[0] == '_'){
        cout<<"\nIt's a Valid identifier";
    } else {
        cout<<"\nIt's not a Valid identifier";
    }
    return 0;
}