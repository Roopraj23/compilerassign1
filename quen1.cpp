#include<bits/stdc++.h>

using namespace std;

int main(){
    string com;
    
    cout<<"Enter the comment"<<endl;
    getline(cin, com);
    cout<<com<<endl;

    int size = com.size();
    cout<<size<<endl;

    if(com[0] == '/'){
        if(com[1] == '/'){
            cout<<"It's a Comment \n";
        } else if(com[1] == '*'){
           if(com[size-2] == '*' && com[size-1] == '/'){
               cout<<"It's a Comment \n"<<endl;
           } else {
               cout<<"It's not a Comment \n"<<endl;
           }
        }
    } else { 
        cout<<"It's not a Comment \n"<<endl;
    }
    return 0;
}