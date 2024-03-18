#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> array){
    
    int min = array[0];
    int index = 0;
    int trackIndex = 0;
    for(int number : array){
        if(min > number){
            min = number;
            trackIndex = index;
        }
        index++;
    }
    return trackIndex;

}

vector<int> selectionSort(vector<int> array){
    vector<int> sortedArray;
    for(int number : array){
        int minNumber =  findMin(array);
        sortedArray.push_back(array[minNumber]);
       array.erase(array.begin()+minNumber);
        
    }

    return sortedArray;

}


int main(){
    vector<int>  array = {93,3,1,34,-43,34,34,43,34};
    array = selectionSort(array);

    for(int number : array){
        cout << number << " ";
    }
}