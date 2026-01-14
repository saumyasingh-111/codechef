// Two Pile Game

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        bool bobcheck=false;
        bool alicecheck=false;
        if(x%2==0){
            bobcheck=true;
        }
        else if(x%2!=0){
           alicecheck=true;
        }
        else if(y%2==0){
            bobcheck=true;
        }
        else if(y%2!=0){
            bobcheck=true;
        }
        else if(x%2==0 && y%2!=0){
            alicecheck=true;
        }
        if(bobcheck){
            cout<<"bob"<<"\n";
        }
        if(alicecheck){
            cout<<"alice"<<"\n";
        }
    }
}