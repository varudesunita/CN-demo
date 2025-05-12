#include<iostream>
using namespace std;
int main(){
    int F;
    cout<<"Enter the top floor(F):";
    cin>>F;

    int totalRings = 0,totalWaits = 0,totalTime = 0;

    for(int floor = 1; floor<=F; floor++){
        totalTime +=2;

        bool div4 = (floor % 4 == 0);
        
    }
}