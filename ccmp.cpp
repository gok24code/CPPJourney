#include <iostream>

using namespace std;

const int size_of_veri = 15;
void analiz(int veri[size_of_veri]){

    int positives = 0, negatives = 0, zeros = 0;

    for (int i = 0; i < size_of_veri; i++){

        if(veri[i] > 0)
        {
            positives += veri[i];
        }
        else 
        if(veri[i] < 0)
        {
            negatives++;
        }
        else
        {
            zeros++;
        }
    }

    cout << "P: " << positives << " N: " << negatives << " 0:" << zeros << endl;
}

void findMaxTerm(int veri[size_of_veri]){
    int maxTerm = 0, secondMax = 0;
    for(int i = 0; i < size_of_veri - 1; i++){
        for(int j = 0; j < size_of_veri - 1 - i; j++){
            if(veri[i] > maxTerm){
                maxTerm = veri[i];
            }
            if(veri[i] > secondMax && veri[i] < maxTerm){
                secondMax = veri[i];
            }
        }
    }
    cout << "MAX: " << maxTerm << endl << "SECOND MAX: " << secondMax << endl;

    
}

int main()
{
    int veri[15] = {12, -5, 8, 8, 0, 23, -14, 7, 19, 0, 4, -5, 16, 16, 3};

//    analiz(veri);
    findMaxTerm(veri);
}