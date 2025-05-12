#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter number of days (N):";
    cin>>N;

    int sunbuds = 0,moonblossoms = 0,starroots = 0;
    int crystalFlower = 0,wildleafs = 0,restingDay = 0;
    int totalFlower = 0;

    for(int day = 1; day <=N; day++){
        bool div2 = (day %2 == 0);
        bool div3 = (day %3 == 0);
        bool div4 = (day %4 == 0);

        if(div2 && div3 && div4){
            restingDay++;  
        }
        else if(div2 && div3){
            crystalFlower += 1;
            totalFlower += 1;
        }
        else if(div2){
            sunbuds += 2;
            totalFlower += 2;
        }
        else if(div3){
            moonblossoms += 3;
            totalFlower += 3;
        }
        else if(div4){
            starroots += 4;
            totalFlower += 4;
        }
        else{
            wildleafs += 1;
            totalFlower += 1;
        }
    }
    cout<< "\nFlower Count:\n";
    cout<<"sunbuds:"<<sunbuds<<endl;
    cout<<"Moonblossoms:"<<moonblossoms<<endl;
    cout<<"Starroots:"<<starroots<<endl;
    cout<<"Crystal Flower:"<<crystalFlower<<endl;
    cout<<"Wildleafs:"<<wildleafs <<endl;
    cout<<"resting Days:"<<restingDay<<endl;
    cout<<"total Flowers Planted:"<<totalFlower <<endl;

    return 0;
}

